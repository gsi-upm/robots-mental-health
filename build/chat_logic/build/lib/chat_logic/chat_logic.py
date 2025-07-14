import re
import json
from json import JSONDecodeError
from openai import OpenAI
from chat_logic.planner import generate_study_plan_with_deadlines

# Inicializa el cliente OpenAI/OpenRouter
client = OpenAI(
    base_url="https://openrouter.ai/api/v1",
    api_key="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"
)

def extract_json_and_rest(text: str) -> tuple[dict, str]:
    # Eliminar formato Markdown si está presente (```json ... ```)
    markdown_match = re.search(r"```json\s*({[\s\S]*?})\s*```", text)
    json_text = ""
    rest_text = text

    if markdown_match:
        json_text = markdown_match.group(1)
        rest_text = text.replace(markdown_match.group(0), "").strip()
    else:
        match = re.search(r'\{[\s\S]*\}', text)
        if match:
            json_text = match.group(0)
            rest_text = text.replace(json_text, "").strip()
        else:
            print("[WARNING] No JSON block found in LLM reply")
            return {}, text.strip()

    try:
        parsed_json = json.loads(json_text)
        return parsed_json, rest_text
    except JSONDecodeError as e:
        print(f"[ERROR] JSON decode failed: {e}")
        return {}, text.strip()

def run_chat_mode(user_input: str, history: list) -> str:
    history.append({"role": "user", "content": user_input})
    try:    
        resp = client.chat.completions.create(
            model="meta-llama/llama-3.3-70b-instruct",
            messages=history,
            extra_headers={"HTTP-Referer": "https://tfg.ruben.octavio.upm.es"}
        )
    except Exception as e:
        print(f"[ERROR] LLM request failed: {e}")
        return "Lo siento, no he podido generar el plan debido a un error momentaneo. Inténtalo de nuevo."
    
    reply = resp.choices[0].message.content
    history.append({"role": "assistant", "content": reply})
    return reply

def run_plan_mode(user_input: str, history: list) -> dict:
    history.append({"role": "user", "content": user_input})
    try:
        resp = client.chat.completions.create(
            model="meta-llama/llama-3.3-70b-instruct",
            messages=history,
            extra_headers={"HTTP-Referer": "https://tfg.ruben.octavio.upm.es"}
        )
    except Exception as e:
        print(f"[ERROR] LLM request failed: {e}")
        return {"parsed": {}, "clarification": "Lo siento, no he podido generar el plan debido a un error momentaneo. Inténtalo de nuevo."}
    reply = resp.choices[0].message.content
    history.append({"role": "assistant", "content": reply})
    
    parsed, additional = extract_json_and_rest(reply)

    print("========== LLM reply ==========")
    print(additional)
    print("===================================")

    print("===== JSON parseado =====")
    print(parsed)
    print("==========================")
    
    return {"parsed": parsed, "clarification": additional}
    
