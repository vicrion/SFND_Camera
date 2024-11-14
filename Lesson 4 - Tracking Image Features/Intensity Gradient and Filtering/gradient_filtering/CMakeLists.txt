include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_INCLUDE_PATH})
link_directories(${CMAKE_PREFIX_PATH}/lib)
link_directories(${CMAKE_PREFIX_PATH}/debug/lib)

# Executables for exercises
add_executable (gaussian_smoothing src/gaussian_smoothing.cpp)
target_link_libraries (gaussian_smoothing ${OpenCV_LIBRARIES})

add_executable (gradient_sobel src/gradient_sobel.cpp)
target_link_libraries (gradient_sobel ${OpenCV_LIBRARIES})

add_executable (magnitude_sobel src/magnitude_sobel.cpp)
target_link_libraries (magnitude_sobel ${OpenCV_LIBRARIES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)
