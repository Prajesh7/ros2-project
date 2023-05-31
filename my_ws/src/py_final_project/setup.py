from setuptools import setup

package_name = 'py_final_project'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='prajesh',
    maintainer_email='prajesh@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "turtle_controller_node = py_final_project.turtle_controller:main",
            "turtle_generator_node = py_final_project.turtle_generator:main"
        ],
    },
)
