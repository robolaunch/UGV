cmake_minimum_required(VERSION 3.0.2)
project(husky_gazebo)

find_package(catkin REQUIRED COMPONENTS)

catkin_package()


install(
  DIRECTORY worlds
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(
  FILES launch/husky_empty_world.launch
        launch/husky_empty_world_headless.launch
        launch/spawn_husky.launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)