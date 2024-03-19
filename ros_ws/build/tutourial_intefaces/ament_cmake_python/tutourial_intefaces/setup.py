from setuptools import find_packages
from setuptools import setup

setup(
    name='tutourial_intefaces',
    version='0.0.0',
    packages=find_packages(
        include=('tutourial_intefaces', 'tutourial_intefaces.*')),
)
