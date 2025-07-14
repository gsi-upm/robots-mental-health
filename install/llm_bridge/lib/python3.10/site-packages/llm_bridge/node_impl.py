import rclpy
import json
from rclpy.node import Node
from chatbot_msgs.srv import GetResponse, ResetModel
from chat_logic.chat_logic import run_chat_mode, run_plan_mode
from chat_logic.prompts import conversational_prompt, extractor_prompt

class LLMBridge(Node):
    def __init__(self):
        super().__init__('llm_bridge')

        # historiales iniciales con los prompts
        self.chat_hist = [{"role":"system","content":conversational_prompt}]
        self.plan_hist = [{"role":"system","content":extractor_prompt}]

        # Servicio para obtener respuesta
        self.srv = self.create_service(
            GetResponse, '/chatbot/get_response', self.on_get_response)
        # Servicio para resetear estado
        self.reset_srv = self.create_service(
            ResetModel, '/chatbot/reset', self.on_reset)

        self.get_logger().info("LLMBridge listo (modo chat).")

    def on_get_response(self, request, response):
        inp = request.input
        mode = request.model or 'chat'  # usamos el model de GetResponse.srv como "modo"
        self.get_logger().info(f"Petición LLMBridge ({mode}): '{inp}'")
        if mode == 'chat':
            out = run_chat_mode(inp, self.chat_hist)
            
        else:
            plan_data = run_plan_mode(inp, self.plan_hist)
            out = json.dumps(plan_data, ensure_ascii=False)
        response.output = out
        return response

    def on_reset(self, request, response):
        self.mode = 'chat'
        self.chat_hist = [{"role":"system","content":conversational_prompt}]
        self.plan_hist = [{"role":"system","content":extractor_prompt}]
        self.get_logger().info("LLMBridge reseteado a modo CHAT.")
        return response

def main(args=None):
    rclpy.init(args=args)
    node = LLMBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

