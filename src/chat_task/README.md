chat_task
====================

Welcome to your (fairly bare-bones!) task template.

What are the next steps?

## Test the UI

The user interface of your task is written in QML. You can test it on your
development machine by running:

```
> qmlscene res/ui/main.qml
```

At runtime, the `ui/` folder will be imported by the `ui_server` node
managing your robot's display, and QML content (similar to `main.qml`) can be displayed
on the robot's screen.

This means that you can include several QML files and or resources like images in the 
`ui/` folder, and import them in your main QML file, as you would normally do.

The `ui/` folder already contains a simple example that you can use as a
starting point.

## Compile and install the task

You need a ROS 2 environment to compile the template.

You can for instance use the ROS humble Docker image, or PAL Robotics own 
public 'tutorials' Docker image (itself based on ROS humble):

```
> docker pull palrobotics/public-tutorials-alum-devel
> docker run -it --name ros2_sandbox \
             -v <path to your workspace>:/home/user/exchange/ws \
             palrobotics/public-tutorials-alum-devel bash
```

Then, simply run:

```
> cd /home/user/exchange/ws
> colcon build
> source install/setup.bash
```

You can now start your task with:

```
> ros2 launch chat_task chat_task.launch.py
```

## Testing

This basic task template does not do much on this own. However, we can already check it works
as intended.

Open a second terminal, and run:

```
ros2 action list
```

> Note: you can open a new terminal in the same Docker image with:
> ```
> docker exec -it ros2_sandbox bash
> ```

You should see your task and its *control* action:

```
/chat_task/control
```


We can trigger the task (from a third terminal):

```
ros2 action send_goal --feedback /chat_task/control task_msgs/action/TaskControl "task_data: 'test data'" 
```

You should get the following output:

```
Waiting for an action server to become available...
Sending goal:
     task_data: test

Goal accepted with ID: d011816361164b0c9a014c572388781f

Feedback:
    status: task started

Feedback:
    status: completed 10%

Feedback:
    status: completed 20%

[...]

Feedback:
    status: completed 90%

Feedback:
    status: task completed

Result:
    error_msg: ''

Goal finished with status: SUCCEEDED
```

## Implement your task

By default, the template does not do anything useful. It does provide however all
the boilerplate to quickly implement your own ROS 2 task.

Implement your task in `./chat_task/task_impl.py`. You might want to specifically look at
the `on_request_exec` method.

## Install on the robot

To install your task on the robot, you should use PAL's `deploy` tool. It will
compile your task (using ROS' `colcon`) and copy the resulting artifacts to the
`deployed workspace` of your robot (`/home/pal/deployed_ws`).


### Deploy the application controller to the robot

**To deploy the code to the robot, you have to run the following commands from
*inside* your PAL OS Developer Docker image**.

- from within the PAL OS Developer Docker image, go to root of the project
- run `ros2 run pal_deploy deploy --package chat_task generic-pal-XXc` (replace `generic-pal-XXc` by your actual robot)

You can now `ssh` onto the robot (`ssh pal@generic-pal-XXc`, password
`pal`), and go to your project: `cd ~/deployed_ws/share/chat_task`

## Run your task

`ssh` onto the robot (`ssh pal@generic-pal-XXc`, password `pal`).

There are several ways to run the task:

1. Automatically launch the task and transition to an active state:

`ros2 launch chat_task chat_task.launch.py`

The task should print:

```
[start_task-1] [INFO] [chat_task]: Initialising...
[start_task-1] [INFO] [chat_task]: Task chat_task started, but not yet configured.
[start_task-1] [INFO] [chat_task]: Task chat_task is configured, but not yet active
[start_task-1] [INFO] [chat_task]: Task chat_task is active and running
```

To actually trigger the task behaviour, see section Testing above.

2. Manually start your task:

`ros2 run chat_task start_task`

Since your task is implemented as a lifecycle node, you need to manage it
through the lifecycle tools. You can execute the following to transit the
mission controller as follows:

``ros2 lifecycle set /task_chat_task configure``
``ros2 lifecycle set /task_chat_task activate``

To stop it (but not re-setting it's internal variables):
``ros2 lifecycle set /task_chat_task activate``

To stop it and clean it:
``ros2 lifecycle set /task_chat_task deactivate``
``ros2 lifecycle set /task_chat_task cleanup``


3. Automatically start your task at startup:

See [Application
management](https://docs.pal-robotics.com/sdk-dev/management/application-management). 
