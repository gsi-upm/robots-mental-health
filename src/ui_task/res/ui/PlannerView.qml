import QtQuick 2.12
import QtQuick.Controls 2.12
import Ros 2.0
import "js/Constants.js" as Constants

Item {
    id: plannerView

    property var tasksByDay: ({})
    property var unassigned: ([])
    property var taskKeys: []

    property alias btnChat: btnChat
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
            anchors.margins: 40
            spacing: 50

            Label {
                text: "Planificación semanal"
                font.pixelSize: 40
                color: "white"
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Image {
                source: "images/planner.png"
                width: 200
                height: 200
                fillMode: Image.PreserveAspectFit
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Text {
                text: "Aquí tienes tu planificación de estudio semanal, cualquier cosa que necesites no dudes en decírmela."
                font.pixelSize: 20
                color: "white"
                wrapMode: Text.WordWrap
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Column {
                spacing: 16
                anchors.horizontalCenter: parent.horizontalCenter


                Component.onCompleted: {
                    console.log("Keys:", taskKeys)
                }

                Row {
                    spacing: 16
                    anchors.horizontalCenter: parent.horizontalCenter

                    Repeater {
                        model: taskKeys
                        delegate: Column {
                            spacing: 8
                            width: 200
                            anchors.verticalCenter: parent.verticalCenter

                            Label {
                                text: modelData
                                font.bold: true
                                font.pixelSize: 18
                                color: "#f0f0f0"
                                horizontalAlignment: Text.AlignHCenter
                                width: parent.width
                                height: 40
                            }

                            Rectangle {
                                width: parent.width
                                height: 140
                                radius: 12
                                color: "#2e2e2e"
                                border.color: "#555"

                                Text {
                                    anchors.fill: parent
                                    anchors.margins: 10
                                    text: tasksByDay[modelData] ? tasksByDay[modelData].join("\n") : ""
                                    color: "white"
                                    wrapMode: Text.WordWrap
                                    horizontalAlignment: Text.AlignHCenter
                                    verticalAlignment: Text.AlignVCenter
                                    font.pixelSize: 14
                                }
                            }
                        }
                    }

                }        

            }

            Column {
                visible: unassigned.length > 0
                spacing: 8
                anchors.horizontalCenter: parent.horizontalCenter

                Label {
                    text: "Tareas sin asignar:"
                    font.pixelSize: 20
                    color: "orange"
                    horizontalAlignment: Text.AlignHCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Repeater {
                    model: unassigned
                    delegate: Text {
                        text: modelData[0] + " - " + modelData[1] + "h"
                        font.pixelSize: 16
                        color: "white"
                        horizontalAlignment: Text.AlignHCenter
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                }
            }

            Text {
                visible: unassigned.length === 0
                text: "¡Para seguir charlando puedes pulsar Modo Conversación!"
                font.pixelSize: 18
                color: "white"
                wrapMode: Text.WordWrap
                horizontalAlignment: Text.AlignHCenter
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Row {
                anchors.horizontalCenter: parent.horizontalCenter
                spacing: 40

                Button {
                    id: btnChat
                    width: 250
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
                            text: "Modo Conversación"
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