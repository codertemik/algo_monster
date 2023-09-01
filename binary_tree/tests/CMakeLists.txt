add_executable(binary_tree_tests binary_tree_tests.cpp)

target_include_directories(binary_tree_tests PRIVATE ../include)

target_link_libraries(binary_tree_tests PRIVATE binary_tree PRIVATE gtest_main)