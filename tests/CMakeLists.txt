project(tests)
add_executable(tests tests.cpp)
target_link_libraries(tests homework)
add_test(NAME tests COMMAND tests)