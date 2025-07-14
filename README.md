**TFG – Diseño de un Asistente Robótico Social para la Gestión del Estrés Académico Basado en Modelos de Lenguaje**

Autor: **Rubén Octavio Tercero**  
Tutor: **Sergio Muñoz López**  
Universidad Politécnica de Madrid – ETSIT  
Grupo de Sistemas Inteligentes (GSI)



## Descripción

Este repositorio contiene el código fuente y los recursos desarrollados en el marco de mi Trabajo de Fin de Grado (TFG), cuyo objetivo es diseñar un asistente académico conversacional, embebido en un robot social, capaz de detectar estrés académico y ofrecer apoyo emocional y planificación personalizada mediante modelos de lenguaje de gran escala (LLMs).

El sistema se ha implementado sobre el software de los robots sociales de PAL Robotics (TIAGo Head / ARI) y utiliza ROS 2, QML y OpenRouter para la interacción natural en dos modos:

- **Modo conversacional**: proporciona apoyo emocional basado en el lenguaje natural.
- **Modo planificación**: genera un plan de estudio semanal personalizado, adaptado a tareas, disponibilidad y nivel de dificultad.



## Arquitectura del sistema

El asistente se compone de los siguientes módulos ROS 2:

- `mission_controller`: orquestador de la interacción.
- `chat_task`: modo conversacional y soporte emocional.
- `planner_task`: modo planificación académica.
- `llm_bridge`: interfaz con modelos de lenguaje vía OpenRouter.
- `say_skill`: síntesis de voz del robot.
- `ui_task`: interfaz gráfica en QML (pantalla del robot).

La lógica de planificación se implementa en `planner.py` mediante un algoritmo determinista que distribuye tareas según deadlines y dificultad.



## Tecnologías utilizadas

- **ROS 2 (rclpy)**  
- **PAL Robotics TIAGo/ARI**  
- **QML/Qt** para la interfaz  
- **OpenRouter API** para acceso a LLMs  
- **meta-llama/llama-3.3-70b-instruct** como modelo de lenguaje  
- **Python**



## Ejecución

Para ejecutar el sistema completo en un entorno ROS 2 con un robot compatible o en un contenedor de simulación de este:

bash
colcon build
source install/setup.bash
ros2 launch mission_controller mission_controller.launch.py
