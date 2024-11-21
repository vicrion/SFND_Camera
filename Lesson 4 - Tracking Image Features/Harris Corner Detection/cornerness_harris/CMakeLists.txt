include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executables for exercise
add_executable (cornerness_harris src/cornerness_harris.cpp)
target_link_libraries (cornerness_harris ${OpenCV_LIBRARIES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)
