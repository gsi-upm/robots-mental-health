/* Copyright (c) 2025 PAL Robotics SLU. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

import QtQuick 2.15

QtObject  {
    id: mockup_ros_service

    property string service: ""
    property string value: ""

    signal requestReceived()

    Component.onCompleted: {
        console.log("NEW ROS SERVICE SERVER CREATED" + (service ? ": " + service : ""));

    }
}
