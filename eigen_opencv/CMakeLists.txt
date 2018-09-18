cmake_minimum_required(VERSION 3.0)
project(eigen_opencv_demo VERSION 1.0 DESCRIPTION "Demo of depending on other libraries" LANGUAGES CXX)

# Let's build as a "Release"... this controls optimization level and inclusion
# of debug symbols. We wrap in an if statement to allow users to override
# setting:
if( NOT CMAKE_BUILD_TYPE )
  set(CMAKE_BUILD_TYPE Release)
endif()

# we are using Eigen, so let's see if we can find it:
find_package(Eigen3 REQUIRED)
# Eigen is header only, so we need to tell CMake that we want to look in the
# path containing Eigen's headers
include_directories(${EIGEN3_INCLUDE_DIR})

# let's see if we can find OpenCV, note that by requiring specific COMPONENTS,
# we are not linking against all OpenCV which speeds compile time and reduces
# the requirements of having a full OpenCV
find_package(OpenCV REQUIRED COMPONENTS highgui core imgproc)

# let's add an executable:
add_executable(demo demo.cpp)
# we need to link against OpenCV; in below, the ${OpenCV_LIBS} variable will
# only include the libraries explicitly listed as required components above
target_link_libraries(demo ${OpenCV_LIBS})
