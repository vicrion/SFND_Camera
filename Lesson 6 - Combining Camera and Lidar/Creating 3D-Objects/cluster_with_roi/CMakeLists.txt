include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executables for exercises
add_executable (cluster_with_roi src/cluster_with_roi.cpp src/structIO.cpp)
target_link_libraries (cluster_with_roi ${OpenCV_LIBRARIES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/dat/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/dat/)