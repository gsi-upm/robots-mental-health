#!/usr/bin/env python
# -*- coding: utf-8 -*-

from setuptools import find_packages, setup
from glob import glob

NAME = "llm_bridge"

setup(
    name=NAME,
    version="0.1.0",
    license="Apache-2.0",
    description="llm_bridge",
    author="Ruben Octavio",
    author_email="ruben.octavio@alumnos.upm.esi",
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
    ],
    tests_require=['pytest'],
    install_requires=['setuptools',
        'chat_logic',      # paquete con la lógica backend: utilizaremos run_chat_mode/run_plan_mode
        'openai',          # para OpenRouter/OpenAI
        'requests',
        ],
    zip_safe=True,
    entry_points={
        'console_scripts': [
            'llm_bridge = llm_bridge.node_impl:main',
            'start_node = llm_bridge.start_node:main',
        ],
    }

)
