import QtQuick 2.12
import QtQuick.Controls 2.12
import "js/Constants.js" as Constants

Rectangle {
    id: mainScreen

    width: Constants.width
    height: Constants.height

    property alias btnChat: btnChat
    property alias btnPlanner: btnPlanner
    signal backClicked

    gradient: Gradient {
        GradientStop { position: 0.0; color: "#2b2b2b" }
        GradientStop { position: 1.0; color: "#000000" }
    }

    Column {
        anchors.fill: parent
        anchors.margins: 80
        spacing: 100

        // Parte superior (título e imagen)
        Column {
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 40

            Image {
                source: "images/main.png"
                width: 200  // 🔁 Tamaño fijo legible en cualquier resolución
                height: 200
                fillMode: Image.PreserveAspectFit
                anchors.horizontalCenter: parent.horizontalCenter
                visible: source !== ""
            }

            Label {
                text: "¿Cómo te puedo ayudar?"
                font.pixelSize: 48  // 🔁 Tamaño claro y consistente
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

        // Texto explicativo
        Text {
            text: "Selecciona el modo al que quieres acceder."
            font.pixelSize: 22
            color: "white"
            wrapMode: Text.WordWrap
            anchors.horizontalCenter: parent.horizontalCenter
        }

        // Botones principales
        Rectangle {
            anchors.horizontalCenter: parent.horizontalCenter
            width: 500
            height: 180
            radius: 20
            color: "#1a1a1a"
            border.color: "#444"

            Row {
                anchors.centerIn: parent
                spacing: 30

                Button {
                    id: btnChat
                    width: 200
                    height: 60
                    background: Rectangle {
                        color: "#2196F3"
                        radius: 10
                    }

                    Row {
                        anchors.centerIn: parent
                        spacing: 10
                        Text {
                            text: "💬 Conversación"
                            color: "white"
                            font.bold: true
                            font.pixelSize: 18
                        }
                    }
                }

                Button {
                    id: btnPlanner
                    width: 200
                    height: 60
                    background: Rectangle {
                        color: "#4CAF50"
                        radius: 10
                    }

                    Row {
                        anchors.centerIn: parent
                        spacing: 10
                        Text {
                            text: "🗓️ Planificación"
                            color: "white"
                            font.bold: true
                            font.pixelSize: 18
                        }
                    }
                }
            }
        }

        Item { height: 60 }

        // Botón de salida
        Button {
            id: btnExit
            width: 300
            height: 50
            anchors.horizontalCenter: parent.horizontalCenter
            background: Rectangle {
                color: "#D32F2F"
                radius: 10
            }

            Row {
                anchors.centerIn: parent
                spacing: 8
                Text {
                    text: "Apagar"
                    color: "white"
                    font.bold: true
                    font.pixelSize: 16
                }
            }
        }
    }
}
