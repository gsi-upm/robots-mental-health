from setuptools import find_packages
from setuptools import setup

setup(
    name='chatbot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('chatbot_msgs', 'chatbot_msgs.*')),
)
