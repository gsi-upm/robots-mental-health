// an example of a custom widget
//
// this widget is a simple button that changes its color when clicked

import QtQuick 2.15

Rectangle {

    id: btn

    property alias text: label.text
    signal clicked()

    width: 150
    height: 75
    radius: 10

    color: Qt.rgba(1., 0.65, 0.48, 1.)

    Text {
        id: label
        width: parent.width * 0.9
        anchors.centerIn: parent
        text: "Click me"
        wrapMode: Text.WordWrap
        horizontalAlignment: Text.AlignHCenter
    }

    SequentialAnimation {
        running: false
        id: anim
        NumberAnimation {
            target: btn
            property: "opacity"
            from: 1.0
            to: 0.0
            duration: 500
        }
        NumberAnimation {
            target: btn
            property: "opacity"
            from: 0.0
            to: 1.0
            duration: 500
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            anim.running = true
            parent.clicked()
        }
    }
}