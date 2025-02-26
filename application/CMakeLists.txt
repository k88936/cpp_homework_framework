project(application)
add_executable(${PROJECT_NAME} main.cpp
        argparse.hpp)
target_link_libraries(${PROJECT_NAME} homework)