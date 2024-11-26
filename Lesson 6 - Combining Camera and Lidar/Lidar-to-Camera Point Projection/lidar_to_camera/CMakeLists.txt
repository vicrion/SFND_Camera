include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executables for exercises
add_executable (show_lidar_top_view src/show_lidar_top_view.cpp src/structIO.cpp)
target_link_libraries (show_lidar_top_view ${OpenCV_LIBRARIES})

add_executable (project_lidar_to_camera src/project_lidar_to_camera.cpp src/structIO.cpp)
target_link_libraries (project_lidar_to_camera ${OpenCV_LIBRARIES})


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/dat/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/dat/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)