from datetime import datetime, timedelta

# Versión mejorada del planificador: respeta fechas límite y reporta tareas no planificadas
def difficulty_weight(diff):
    return {"baja": 1, "media": 2, "alta": 3}.get(diff, 2)

def compute_priority(task):
    try:
        days_to_deadline = (datetime.strptime(task["deadline"], "%Y-%m-%d") - datetime.today()).days
    except Exception:
        days_to_deadline = 30
    urgency = max(1, 30 - days_to_deadline)
    weight = difficulty_weight(task["difficulty"])
    started = 0 if task.get("started", False) else 1
    return urgency * weight + started * 2

def generate_study_plan_with_deadlines(study_data):
    availability = study_data["availability"]
    tasks = study_data["tasks"]

    # Suponemos que availability tiene días en orden real (lunes, martes, etc.)
    day_names = list(availability.keys())
    today = datetime.today()
    day_mapping = {}

    # Mapear los días a fechas (desde hoy)
    for i, name in enumerate(day_names):
        day_mapping[name] = today + timedelta(days=i)

    # Ordenar tareas por prioridad
    tasks_sorted = sorted(tasks, key=compute_priority, reverse=True)

    # Preparar plan
    plan = {day: [] for day in day_names}
    remaining_time = availability.copy()
    unassigned_tasks = []

    for task in tasks_sorted:
        time_needed = difficulty_weight(task["difficulty"]) * 3 # Asumimos 3 horas base por dificultad
        try:
            task_deadline = datetime.strptime(task["deadline"], "%Y-%m-%d")
        except:
            task_deadline = today + timedelta(days=30)  # fecha futura genérica

        for day in day_names:
            if time_needed <= 0:
                break
            current_date = day_mapping[day]
            if current_date > task_deadline:
                continue  # no asignar después de la fecha límite
            if remaining_time[day] > 0:
                hours = min(remaining_time[day], time_needed)
                plan[day].append(f"{hours}h - {task['name']}")
                remaining_time[day] -= hours
                time_needed -= hours

        if time_needed > 0:
            unassigned_tasks.append((task["name"], time_needed))

    return {
        "plan": plan,
        "unassigned_tasks": unassigned_tasks
    }

