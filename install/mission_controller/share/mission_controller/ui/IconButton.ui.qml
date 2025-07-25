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


Sample component for a custom UI button.

This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/

import QtQuick 2.15
import "js/Constants.js" as Constants

Rectangle {
    id: btn

    property string label: "Click me"
    property string icon: "images/push.svg"

    // propagate mouseArea.clicked to this signal
    // so that users can set PALIconButton.onClicked
    signal clicked
    Connections {
        target: mouseArea
        function onClicked() {
            btn.clicked()
        }
    }

    width: 200
    height: 200

    color: Constants.accentColor
    radius: 20
    border.width: 0

    Item {
        id: iconPlaceholder

        width: parent.width
        height: parent.height * 0.75
        anchors.top: parent.top

        anchors.horizontalCenter: parent.horizontalCenter

        Image {
            id: btnIcon
            anchors.fill: parent
            anchors.leftMargin: 20
            anchors.rightMargin: 20
            anchors.topMargin: 20
            anchors.bottomMargin: 20
            source: btn.icon

            fillMode: Image.PreserveAspectFit
        }
    }

    Item {
        id: labelPlaceholder

        width: parent.width
        height: parent.height - iconPlaceholder.height
        anchors.bottom: parent.bottom
        anchors.horizontalCenter: parent.horizontalCenter

        Rectangle {
            id: rectangle
            color: Constants.bgColor
            radius: btn.radius
            anchors.fill: parent
        }
        Rectangle {
            id: hideRoundedCornerRectangle
            width: parent.width
            height: rectangle.radius
            color: Constants.bgColor
            anchors.top: rectangle.top
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Text {
            id: label
            text: qsTr(btn.label)

            font: Constants.font
            //font.weight: Font.Bold
            anchors.centerIn: parent
            color: Constants.fgColor
        }
    }

    Rectangle {
        id: borderHighlight
        color: "transparent"
        border.color: Constants.fgColor
        border.width: mouseArea.containsMouse ? 8 : 4
        anchors.fill: parent
        radius: parent.radius
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        hoverEnabled: true
    }
}