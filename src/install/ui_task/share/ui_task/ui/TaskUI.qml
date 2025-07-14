import QtQuick 2.15
import Ros 2.0
import ui_task.ui 1.0

Item {
    width: mainScreen.width
    height: mainScreen.height

    IntentTopic {
        id: intentTopic
        topic: "/intents"
    }

    MainPage {
        id: mainScreen

        // para futuros usos, si defines botón de volver
        onBackClicked: {
            intentTopic.value = "__intent_present_content__"
            intentTopic.data = "{\"object\": \"__back__\"}"
            intentTopic.publish()
        }

        btnChat.onClicked: {
            intentTopic.value = "__intent_start_activity__"
            intentTopic.data = "{\"object\": \"chat\"}"
            intentTopic.publish()
        }

        btnPlanner.onClicked: {
            intentTopic.value = "__intent_start_activity__"
            intentTopic.data = "{\"object\": \"planner\"}"
            intentTopic.publish()
        }
    }
}
