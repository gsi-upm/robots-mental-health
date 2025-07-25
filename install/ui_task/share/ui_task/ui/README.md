Task UI with QML
================

How to edit your UI?
--------------------

You can modify the user interface either with an editor,
or by directly writing QML code.

Using Qt Design Studio
~~~~~~~~~~~~~~~~~~~~~~

To use an editor, get Qt Design Studio: https://www.qt.io/product/ui-design-tools

Qt Design Studio is available on Windows, MacOS and Linux, and is open-source.

**Note**: On Linux, you can easily install it from Flathub:
https://flathub.org/apps/io.qt.qtdesignstudio

Open Qt Design Studio, click on 'Open Project', browse to this directory, and 
open ui_task.qmlproject

You might want to check Qt Design Studio documentation if you are new to
QML UI design: https://doc.qt.io/qtdesignstudio/studio-getting-started.html


Editing the code directly
~~~~~~~~~~~~~~~~~~~~~~~~~

You can also directly edit the QML code with any code editor. The only requirement
is that a `qmldir` file exists at the root of this directory, listing the QML 
components that you want to load in your UI.


How to test your QML UI?
------------------------

From Qt Design Studio
~~~~~~~~~~~~~~~~~~~~~

You can test your UI directly from Qt Design Studio, like any other QtQuick/QML
application.

We provide in the `Ros/` subfolder a 'mock-up' ROS component to simulate
the integration with the robot: this means that you do not need a robot to develop
and test the UI (obviously, some things *do* require testing on the actual robot, like
motions!)

From the command-line
~~~~~~~~~~~~~~~~~~~~~

If you prefer the command-line, you can easily test your user interface with
`qmlscene`, which is part of the Qt installation.

On Ubuntu, you can install it with:

```bash
sudo apt install qmlscene
```

If the ROS-QML plugin is not installed or not available (and your task
requires it), you can use the provided `Ros` mockup QML module.
Simply add the current directory to `QML2_IMPORT_PATH` environment variable:


```bash
export QML2_IMPORT_PATH=`pwd`:$QML2_IMPORT_PATH
```

Then you can run your QML task with:

```bash
qmlscene TaskUI.qml 
```