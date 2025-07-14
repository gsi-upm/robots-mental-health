import QtQuick 2.15
import Ros 2.0
import ui_task.ui 1.0

Item {
    anchors.fill: parent

    property string view: "PlannerInput"  // Inicializamos por defecto a PlannerInput.qml que será la primera en mostrarse
    property var sharedPlan: ({})
    property var sharedUnassigned: ([])
    property var taskKeysInternal: []

    IntentTopic {
        id: intentTopic
        topic: "/intents"
    }

    IntentTopic {
        id: planReceiver
        topic: "/intents"
        isPublisher: false

        onValueChanged: {
            if (planReceiver.value === "__intent_study_plan__") {
                console.log("Recibido intent __intent_study_plan__")
                const parsed = JSON.parse(planReceiver.data);
                console.log("parsed.plan:", JSON.stringify(parsed.plan))
                sharedPlan = parsed.plan;
                sharedUnassigned = parsed.unassigned_tasks;
                taskKeysInternal = Object.keys(parsed.plan);
                console.log("taskKeysInternal:", taskKeysInternal)
                view = "PlannerView";
            }
        }
    }

    // Vista PlannerInput.qml de recopilación de información para el plan de estudio
    PlannerInput {
        id: plannerInput
        visible: view === "PlannerInput"
        anchors.fill: parent

        btnGeneratePlan.onClicked: {
            intentTopic.value = "__intent_generate_plan__"
            intentTopic.data = "{}"
            intentTopic.publish()
        }

        btnExit.onClicked: {
            intentTopic.value = "__intent_shutdown__"
            intentTopic.data = "{}"
            intentTopic.publish()
        }
    }

    // Vista PlannerView.qml del plan generado
    PlannerView {
        id: plannerView
        visible: view === "PlannerView"
        anchors.fill: parent
        tasksByDay: sharedPlan
        unassigned: sharedUnassigned
        taskKeys: taskKeysInternal

        btnChat.onClicked: {
            intentTopic.value = "__intent_change_mode__"
            intentTopic.data = JSON.stringify({target: "chat"})
            intentTopic.publish()
        }

        btnExit.onClicked: {
            intentTopic.value = "__intent_shutdown__"
            intentTopic.data = "{}"
            intentTopic.publish()
        }
    }
}
