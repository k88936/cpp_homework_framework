cmake_minimum_required(VERSION 3.10)
project(homework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
add_executable(app
        src/main.cpp
)
include_directories(src)
enable_testing()
option(GUI_APPLICATION "Build GUI application" OFF)
if (GUI_APPLICATION)
    add_subdirectory(gui_application)
endif ()

add_test(NAME app COMMAND app 6)