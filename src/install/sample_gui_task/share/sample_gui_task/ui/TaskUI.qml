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


Sample UI application. This component (AppUI.qml) is sent at startup
to the robot's UI server by the mission controller.
*/

import QtQuick 2.15


import Ros 2.0

Item {
    width: mainScreen.width
    height: mainScreen.height

    property alias customMsg: mainScreen.customMsg

    StringTopic {
        id: stringTopic
        isSubscriber: false
        isPublisher: true
        topic: "/sample_gui_task/ui_msg"
    }

    IntTopic {
        id: taskProgressTopic
        value: 0
        isSubscriber: true
        isPublisher: false
        topic: "/sample_gui_task/task_progress"
    }

    IntentTopic {
        id: intentTopic
        topic: "/intents"
    }


    MainScreen {
        id: mainScreen

        property int counter: 0

        taskProgress: taskProgressTopic.value

        // implement here the actions when user click the various buttons

        onBackClicked: {
            intentTopic.value = "__intent_present_content__";
            intentTopic.data = "{\"object\": \"__back__\"}"
            intentTopic.publish();
        }

        btnAction1.onClicked: {
            counter += 1;
            stringTopic.value = "button pressed " + counter + " times";
            stringTopic.publish();
        }
    }
}