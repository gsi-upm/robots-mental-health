import QtQuick 2.15
import Ros 2.0
import mission_controller.ui 1.0

Item {
    
    anchors.fill: parent

    IntentTopic {
        id: intentTopic
        topic: "/intents"
    }

    MainPage {
        id: mainScreen
        anchors.fill: parent  

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
