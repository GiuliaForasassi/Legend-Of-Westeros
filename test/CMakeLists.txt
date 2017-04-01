add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
set(EXECUTABLE_NAME "runAllTests")

set(TEST_SOURCE_FILES runAllTest.cpp TestLann.cpp)
add_executable(runAllTest ${TEST_SOURCE_FILES})
target_link_libraries(runAllTest gtest gtest_main core)