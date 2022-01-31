cmake_minimum_required(VERSION 3.0.2)
project(husky_control)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  tf2
  tf2_ros
  geometry_msgs
)

catkin_package()

include_directories(
# include
  ${catkin_INCLUDE_DIRS}
)

add_executable(broadcaster src/broadcaster.cpp)
target_link_libraries(broadcaster ${catkin_LIBRARIES})


if (CATKIN_ENABLE_TESTING)
  find_package(roslaunch REQUIRED)
  roslaunch_add_file_check(launch)
endif()

install(DIRECTORY config launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)
