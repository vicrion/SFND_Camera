include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executable for create matrix exercise
add_executable (compute_ttc_lidar src/compute_ttc_lidar.cpp src/structIO.cpp)
target_link_libraries (compute_ttc_lidar ${OpenCV_LIBRARIES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/dat/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/dat/)
