import QtQuick 2.12
import QtQuick.Controls 2.12
import Ros 2.0
import "js/Constants.js" as Constants

Item {
    id: chat

    property string response: ""
    property bool responseReceived: false

    property alias btnPlanner: btnPlanner
    property alias btnExit: btnExit

    Rectangle {
        width: Constants.width
        height: Constants.height
        anchors.fill: parent
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#2b2b2b" }
            GradientStop { position: 1.0; color: "#000000" }
        }

        Column {
            anchors.fill: parent
            anchors.margins: 80
            spacing: 90

            // Título
            Label {
                text: "Modo Conversación"
                font.pixelSize: 40
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // Imagen centrada
            Image {
                source: "images/chat.png"
                width: 200
                height: 200
                fillMode: Image.PreserveAspectFit
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // Mensaje central motivacional
            Text {
                text: "Estoy aquí para escucharte"
                font.pixelSize: 28
                font.bold: true
                color: "white"
                wrapMode: Text.WordWrap
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            // Mensajes complementarios
            Rectangle {
                visible: !responseReceived
                width: parent.width * 0.8
                height: 120
                radius: 12
                color: "#1a1a1a"
                border.color: "#444"
                anchors.horizontalCenter: parent.horizontalCenter

                Column {
                    anchors.fill: parent
                    anchors.margins: 16
                    spacing: 8

                    Text { text: "¿Te apetece charlar un rato?"; color: "white"; font.pixelSize: 18; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                    Text { text: "Recuerda que está bien pedir ayuda."; color: "white"; font.pixelSize: 18; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                    Text { text: "Puedo ayudarte con tu organización o simplemente escucharte."; color: "white"; font.pixelSize: 18; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                }
            }
            
            Column {
                visible: responseReceived
                spacing: 10
                anchors.horizontalCenter: parent.horizontalCenter
                width: parent.width

                Text {
                    text: "Respuesta:"
                    font.pixelSize: 24
                    font.bold: true
                    color: "#4CAF50"
                    width: parent.width
                    horizontalAlignment: Text.AlignHCenter
                }

                Rectangle {
                    width: parent.width * 0.85
                    height: 180
                    radius: 12
                    color: "#1a1a1a"
                    border.color: "#555"
                    anchors.horizontalCenter: parent.horizontalCenter

                    Text {
                        id: responseText
                        text: response
                        anchors.fill: parent
                        anchors.margins: 10
                        wrapMode: Text.WordWrap
                        horizontalAlignment: Text.AlignHCenter
                        verticalAlignment: Text.AlignVCenter
                        font.pixelSize: 16
                        color: "white"
                    }
                }
            }


            // Espaciador
            Item { height: 40 }

            // Botones inferiores
            Row {
                anchors.horizontalCenter: parent.horizontalCenter
                spacing: 40

                Button {
                    id: btnPlanner
                    width: 200
                    height: 50
                    contentItem: null
                    background: Rectangle {
                        color: "#4CAF50"
                        radius: 10
                    }
                    Row {
                        anchors.centerIn: parent
                        spacing: 10
                        Text {
                            text: "Modo planificación"
                            color: "white"
                            font.bold: true
                            font.pixelSize: 16
                        }
                    }
                }

                Button {
                    id: btnExit
                    width: 200
                    height: 50
                    contentItem: null
                    background: Rectangle {
                        color: "#D32F2F"
                        radius: 10
                    }
                    Row {
                        anchors.centerIn: parent
                        spacing: 10
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
    }
}
