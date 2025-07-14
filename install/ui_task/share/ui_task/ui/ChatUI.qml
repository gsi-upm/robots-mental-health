import QtQuick 2.15
import Ros 2.0
import ui_task.ui 1.0

Item {
    anchors.fill: parent

    property string lastResponse: ""
    property bool hasResponse: false

    IntentTopic {
        id: intentTopic
        topic: "/intents"
    }

    IntentTopic {
        id: chatReceiver
        topic: "/intents"
        isPublisher: false

        onValueChanged: {
            if (chatReceiver.value === "__intent_chat_response__" && chatReceiver.data !== "") {
                const parsed = JSON.parse(chatReceiver.data);
                lastResponse = parsed.response;
                hasResponse = true;
            }
        }

    }

    Chat {
        id: chat
        anchors.fill: parent

        response: lastResponse
        responseReceived: hasResponse

        btnPlanner.onClicked: {
            intentTopic.value = "__intent_change_mode__"
            intentTopic.data = JSON.stringify({target: "planner"})
            intentTopic.publish()
        }

        btnExit.onClicked: {
            intentTopic.value = "__intent_shutdown__"
            intentTopic.data = "{}"
            intentTopic.publish()
        }
    }
}
