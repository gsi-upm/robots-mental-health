#!/usr/bin/env python
# -*- coding: utf-8 -*-

from setuptools import find_packages, setup
from glob import glob
from pathlib import Path

NAME = "ui_task"


def ui_files():
    ui_dir = Path('res/ui')
    files = []

    for data in ui_dir.rglob("*"):
        if not data.is_dir():
            files.append((f"share/{NAME}/ui/" +
                         str(data.parent.relative_to(ui_dir)), [str(data)]))

    return files


setup(
    name=NAME,
    version="0.1.0",
    license="Apache-2.0",
    description="ui_task",
    author="todo",
    author_email="todo@todo.todo",
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/' + NAME, ['package.xml']),
        ('share/ament_index/resource_index/packages', ['res/' + NAME]),
        ('share/' + NAME + '/launch', glob('launch/*.launch.py')),
        ('share/ament_index/resource_index/pal_system_module',
         ['module/' + NAME]),
        ('share/' + NAME + '/module', ['module/' + NAME + '_module.yaml']),
        ('share/ament_index/resource_index/pal_configuration.' + NAME,
            ['config/' + NAME]),
        ('share/' + NAME + '/config', ['config/00-defaults.yml']),
    ] + ui_files(),
    tests_require=['pytest'],
    install_requires=['setuptools'],
    zip_safe=True,
    entry_points={
        'console_scripts': [
            'start_task = ' + NAME + '.start_task:main'
        ],
    },
)
