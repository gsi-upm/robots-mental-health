import QtQuick 2.12
import QtQuick.Controls 2.12
import "js/Constants.js" as Constants

Item {

    property alias btnGeneratePlan: btnGeneratePlan
    property alias btnExit: btnExit

    Rectangle {

        id: plannerInput

        width: Constants.width
        height: Constants.height

        anchors.fill: parent

        gradient: Gradient {
            GradientStop { position: 0.0; color: "#2b2b2b" }
            GradientStop { position: 1.0; color: "#000000" }
        }

        Flickable {
            anchors.fill: parent
            contentHeight: columnContent.implicitHeight + 100
            clip: true

            Column {
                id: columnContent
                width: parent.width
                spacing: 80
                anchors.margins: 100
                anchors.horizontalCenter: parent.horizontalCenter

                Item { height: 40 }

                Label {
                    text: "Modo Planificación"
                    font.pixelSize: 36
                    color: "white"
                    horizontalAlignment: Text.AlignHCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Image {
                    source: "images/input.png"
                    width: 200
                    height: 200
                    fillMode: Image.PreserveAspectFit
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Text {
                    text: "Para generar la planificación responde a las siguientes preguntas:"
                    font.pixelSize: 22
                    color: "white"
                    wrapMode: Text.WordWrap
                    horizontalAlignment: Text.AlignHCenter
                    anchors.horizontalCenter: parent.horizontalCenter
                }

                Rectangle {
                    width: parent.width * 0.7
                    implicitHeight: columnQuestions.implicitHeight + 64
                    radius: 20
                    color: "#222"
                    border.width: 1.5
                    border.color: "#444"
                    anchors.horizontalCenter: parent.horizontalCenter

                    Column {
                        id: columnQuestions
                        anchors.fill: parent
                        anchors.margins: 32
                        spacing: 12

                        Text { text: "1. ¿Cuál es el nombre de cada tarea que debes realizar?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                        Text { text: "2. ¿Qué tipo de tarea es (examen, trabajo, exposición)?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                        Text { text: "3. ¿Cuál es la fecha límite para cada tarea?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                        Text { text: "4. ¿Qué nivel de dificultad tienen (baja, media, alta)?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                        Text { text: "5. ¿Has comenzado ya alguna de ellas?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                        Text { text: "6. ¿Cuántas horas puedes dedicar al estudio cada día de la semana?"; color: "white"; font.pixelSize: 22; horizontalAlignment: Text.AlignHCenter; anchors.horizontalCenter: parent.horizontalCenter }
                    }
                }

                Item { height: 40 }

                Row {
                    anchors.horizontalCenter: parent.horizontalCenter
                    spacing: 40

                    Button {
                        id: btnGeneratePlan
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
                                text: "Generar planificación"
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
}
