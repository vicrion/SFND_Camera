cmake_minimum_required(VERSION 2.8.12)

project(camera_fusion)

set(CXX_FLAGS "-Wall -std=c++20")
set(CMAKE_CXX_FLAGS "${CXX_FLAGS}")

# Required dependencies
find_package(OpenCV 4.1 REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBRARY_DIRS})
add_definitions(${OpenCV_DEFINITIONS})

add_subdirectory("Lesson 2 - Autonomous Vehicles and Computer Vision/The OpenCV Library/OpenCV_exercises")
add_subdirectory("Lesson 3 - Engineering a Collision Detection System/Estimating TTC with Lidar/TTC_lidar")
add_subdirectory("Lesson 3 - Engineering a Collision Detection System/Estimating TTC with Camera/TTC_camera")
add_subdirectory("Lesson 4 - Tracking Image Features/Intensity Gradient and Filtering/gradient_filtering")
add_subdirectory("Lesson 6 - Combining Camera and Lidar/Lidar-to-Camera Point Projection/lidar_to_camera")