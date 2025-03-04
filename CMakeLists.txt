cmake_minimum_required(VERSION 3.10)
project(homework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
add_library(homework src/lib.cpp
        src/utils.h
        tests/tests.cpp)
include_directories(include)

enable_testing()
add_subdirectory(tests)
option(GUI_APPLICATION "Build GUI application" OFF)
if (GUI_APPLICATION)
    add_subdirectory(gui_application)
endif ()
add_subdirectory(console_application)
