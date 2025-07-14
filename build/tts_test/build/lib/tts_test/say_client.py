import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from tts_msgs.action import TTS

class SayClient(Node):
    def __init__(self):
        super().__init__('say_client')
        self._tts = ActionClient(self, TTS, '/tts_engine/tts')
        while not self._tts.wait_for_server(timeout_sec=1.0):
            self.get_logger().info("waiting for tts_engine server")

    def say(self, msg):
        self.get_logger().info(f"Saying: {msg}")
        tts_goal = TTS.Goal()
        tts_goal.locale = "en_US"
        tts_goal.input = msg
        self._tts.send_goal_async(tts_goal)

def main():
    rclpy.init()
    say_node = SayClient()
    say_node.say("Hello world!")
    rclpy.spin_once(say_node, timeout_sec=5)
    say_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
