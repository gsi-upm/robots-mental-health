#!/usr/bin/env python
# -*- coding: utf-8 -*-

from setuptools import find_packages, setup
from glob import glob
from pathlib import Path
from babel.messages import frontend as babel
import subprocess


NAME = "mission_controller"


def get_locales():
    locales_dir = Path('locales')
    locales_data = []

    # Iterate through all language directories in 'locales'
    for lang in locales_dir.iterdir():
        lang_path = lang / 'LC_MESSAGES'
        if lang_path.is_dir():
            locales_data.append(
                (f'share/{NAME}/locales/{lang.name}/LC_MESSAGES',
                 [f'locales/{lang.name}/LC_MESSAGES/messages.mo']))

    return locales_data


# Compile existing transalations: automatically generate MO files
subprocess.run(['pybabel compile -d locales'],
               shell=True, capture_output=True, text=True)


def get_ui_files():
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
    description="mission_controller",
    author="todo",
    author_email="todo@todo.todo",
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/' + NAME, ['package.xml']),
        ('share/ament_index/resource_index/packages', ['res/' + NAME]),
        ('share/ament_index/resource_index/pal_system_module', ['res/module/' + NAME]),
        ('share/' + NAME + '/launch', glob('launch/*.launch.py')),
        ('share/' + NAME + '/module', ['res/module/' + NAME + '_module.yaml']),
        # uncomment the next two lines to make the application be launched automatically at startup
        # ('share/ament_index/resource_index/pal_system_module_set', ['res/module_set/' + NAME]),
        # ('share/' + NAME + '/module_set', ['res/module_set/' + NAME + '_module_set.yaml']),
        ('share/ament_index/resource_index/i18n.localized_nodes',
            ['res/localized_nodes/' + NAME])
    ] + get_locales() + get_ui_files(),
    tests_require=['pytest'],
    install_requires=['setuptools'],
    zip_safe=True,
    entry_points={
        'console_scripts': [
            'run_app = ' + NAME + '.run_app:main'
        ],
    },
    cmdclass={'compile_catalog': babel.compile_catalog,
              'extract_messages': babel.extract_messages,
              'init_catalog': babel.init_catalog,
              'update_catalog': babel.update_catalog}
)
