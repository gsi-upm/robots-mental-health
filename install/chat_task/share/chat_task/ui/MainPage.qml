import QtQuick 2.15

import Ros 2.0

Rectangle {

    anchors.fill: parent

    color: "#18272e"

    StringTopic {
        topic: "/basic_ui/text"
        onValueChanged: {
            console.log("Received message: " + value);
            label.text = value;
        }
    }

    IntTopic {
        topic: "/basic_ui/click_count"
        value: btn1.clickCount
    }

    IntentTopic {
        id: intentTopic
        topic: "/intents"
        modality: ModalityTouchscreen
        value: Greet
    }

    Image {
        source: "images/background.png"
        anchors.fill: parent
        fillMode: Image.PreserveAspectCrop
    }

    Text {
        id: label
        font.pixelSize: 60
        color: "black"
        text: "Hello, World!"
        anchors.centerIn: parent
    }

    MyButton {
        id: btn1

        property int clickCount: 0

        anchors.top: label.bottom
        anchors.topMargin: 20
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width * 0.5
        text: "Publish click count to /basic_ui/click_count"

        onClicked: {
            console.log("Button clicked");
            clickCount++;
        }
    }

    MyButton {
        id: btn2
        anchors.top: btn1.bottom
        anchors.topMargin: 10
        anchors.horizontalCenter: parent.horizontalCenter
        width: btn1.width
        color: "teal"
        text: "Send a 'greet' intent"

        onClicked: {
            intentTopic.publish();
        }
    }

}