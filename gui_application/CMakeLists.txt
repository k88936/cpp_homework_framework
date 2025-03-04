cmake_minimum_required(VERSION 3.30)
project(gui_application)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(${PROJECT_NAME} main.cpp
        TextEditStreamBuf.cpp
        TextEditStreamBuf.h
        mywidget.cpp
        mywidget.h
        mywidget.ui
)
target_link_libraries(${PROJECT_NAME}
        homework
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

