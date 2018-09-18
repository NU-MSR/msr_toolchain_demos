# likely, we could get away with an older minimum version number with this
# particular CMake file
cmake_minimum_required (VERSION 3.0)
# let's tell CMake that we are specifically using only C... this will make
# compilation faster and more portable.
project(helper VERSION 1.0 DESCRIPTION "Simple CMake example" LANGUAGES C)

# ensure we are looking in current directory for header files (this is probably
# not needed, but I wanted to show the syntax)
include_directories("${PROJECT_SOURCE_DIR}")

# tell CMake that we will compile "libhelper.so"
add_library(helper SHARED helper.c)

# add an executable and tell CMake to link against "libhelper.so" and "libm.so"
add_executable(geocalcs main.c)
target_link_libraries(geocalcs helper m)
