cmake_minimum_required(VERSION 3.10)
project(demo)
set(CMAKE_CXX_STANDARD 17)

# ================================
# Include directories
# ================================
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include             
    ${CMAKE_CURRENT_SOURCE_DIR}/include/opencv4    
)

# ================================
# Library directories
# ================================
link_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/lib                 
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/opencv          
)

# ================================
# OpenCV Libraries
# ================================
set(OpenCV_LIBS
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/opencv/libopencv_core.so
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/opencv/libopencv_imgproc.so
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/opencv/libopencv_highgui.so
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/opencv/libopencv_imgcodecs.so
)

# ================================
# Build executable
# ================================
add_executable(demo samples/main.cpp)

# ================================
# Link libraries
# ================================
target_link_libraries(demo
    sDepth          
    ${OpenCV_LIBS}
)

set_target_properties(demo PROPERTIES
    BUILD_RPATH "\$ORIGIN/../lib:\$ORIGIN/../lib/opencv"
    INSTALL_RPATH "\$ORIGIN/../lib:\$ORIGIN/../lib/opencv"
)
