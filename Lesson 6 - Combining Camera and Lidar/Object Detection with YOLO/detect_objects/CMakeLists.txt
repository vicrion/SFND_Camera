include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executables for exercises
add_executable (detect_objects src/detect_objects_2.cpp)
target_link_libraries (detect_objects ${OpenCV_LIBRARIES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/dat/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/dat/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)