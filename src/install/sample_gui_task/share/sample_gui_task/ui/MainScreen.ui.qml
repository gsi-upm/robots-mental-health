

/* Copyright (c) 2025 TODO. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 2.15
import "js/Constants.js" as Constants

Rectangle {
    id: mainScreen

    width: Constants.width
    height: Constants.height
    color: Constants.bgColor

    property string customMsg: ""
    property int taskProgress: 0

    property alias btnAction1: btnAction1

    // this signal is emitted when the user clicks
    // on the 'back' button.
    signal backClicked

    Image {
        id: wallpaper
        anchors.fill: parent
        source: "images/wallpaper.jpg"
        fillMode: Image.PreserveAspectCrop
    }
    Rectangle {
        id: backIcon
        width: 50
        height: 50
        opacity: 0.8
        visible: true
        color: Constants.accentColor
        radius: width / 2
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.leftMargin: 30
        anchors.topMargin: 30

        Image {
            source: "images/back.svg"
            anchors.fill: parent
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }
        MouseArea {
            id: mouseArea
            anchors.fill: parent
            hoverEnabled: true

            Connections {
                function onClicked() {
                    mainScreen.backClicked()
                }
            }
        }

        Image {
            id: backTooltip
            x: 24
            y: 56
            z: 100
            source: "images/bubble.svg"
            fillMode: Image.PreserveAspectFit
            visible: mouseArea.containsMouse

            Text {
                text: "This button sends an intent to the mission controller, to navigate back to the main menu."
                anchors.fill: parent
                anchors.leftMargin: 5
                anchors.rightMargin: 5
                anchors.topMargin: 38
                anchors.bottomMargin: 5
                wrapMode: Text.WordWrap
                font.family: Constants.font.family
                font.pixelSize: 18
                color: Constants.fgColor
            }
        }
    }
    IconButton {
        id: btnAction1
        x: 95
        y: 398
        label: "Do some work"
    }

    IconButton {
        id: btnAction2
        x: 322
        y: 398
        label: "Fade image"
        onClicked: mainScreen.state = (mainScreen.state === "" ? "ImageHidden" : "")
    }

    Text {
        id: label
        text: qsTr("sample_gui_task sample task UI")
        anchors.top: parent.top
        font: Constants.largeFont
        color: Constants.fgColor
        anchors.topMargin: 45
        anchors.horizontalCenter: parent.horizontalCenter
    }

    Text {
        id: desc
        x: 95
        y: 175
        width: 427
        height: 189
        text: qsTr("This is a sample UI for a robot task.<br/>It shows several of the QML features (like *components*, *states*, *transitions*...), as well as simple interaction with your task script via ROS.") + (mainScreen.customMsg ? "<br/>**" + mainScreen.customMsg + "**" : "")
        wrapMode: Text.WordWrap
        textFormat: Text.MarkdownText
        font: Constants.font
        color: Constants.fgColor
    }

    Image {
        id: robot
        x: 553
        y: 175
        width: 368
        height: 425
        source: "images/robot.jpg"
        fillMode: Image.PreserveAspectFit
    }

    Rectangle {
        id: taskProgressBar
        x: desc.x
        anchors.top: btnAction1.bottom
        anchors.topMargin: 30
        width: desc.width * (mainScreen.taskProgress/100)
        height: 10
        color: Constants.accentColor
    }

    Text {
        id: taskProgressLabel
        anchors.left: taskProgressBar.left
        anchors.top: taskProgressBar.bottom
        anchors.topMargin: 10
        text: mainScreen.taskProgress + "%"
        font: Constants.font
        color: Constants.fgColor
    }

    states: [
        State {
            name: "ImageHidden"

            PropertyChanges {
                target: robot
                opacity: 0
            }
        }
    ]
    transitions: [
        Transition {
            id: transition
            ParallelAnimation {
                SequentialAnimation {
                    PauseAnimation {
                        duration: 0
                    }

                    PropertyAnimation {
                        target: robot
                        property: "opacity"
                        easing.bezierCurve: [0.455, 0.03, 0.515, 0.955, 1, 1]
                        duration: 250
                    }
                }
            }
            to: "*"
            from: "*"
        }
    ]
}

/*##^##
Designer {
    D{i:0}D{i:12}D{i:15;transitionDuration:2000}
}
##^##*/
