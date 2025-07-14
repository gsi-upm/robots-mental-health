import re
import json
from openai import OpenAI
from chat_logic.planner import generate_study_plan_with_deadlines

# Inicializa el cliente OpenAI/OpenRouter
client = OpenAI(
        base_url="https://openrouter.ai/api/v1",
        api_key="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"
        )

def run_chat_mode(user_input: str, history: list) -> str:
    history.append({"role":"user","content":user_input})
    resp = client.chat.completions.create(
        model="meta-llama/llama-3.2-3b-instruct:free",
        messages=history,
        extra_headers={"HTTP-Referer":"https://tfg.ruben.octavio.upm.es"}
    )
    reply = resp.choices[0].message.content
    history.append({"role":"assistant","content":reply})
    return reply

def run_plan_mode(user_input: str, history: list) -> dict:
    history.append({"role":"user","content":user_input})
    resp = client.chat.completions.create(
        model="meta-llama/llama-3.2-3b-instruct:free",
        messages=history,
        extra_headers={"HTTP-Referer":"https://tfg.ruben.octavio.upm.es"}
    )
    reply = resp.choices[0].message.content
    history.append({"role":"assistant","content":reply})
    match = re.search(r'\{[\s\S]*\}', reply)
    return json.loads(match.group(0)) if match else {}

