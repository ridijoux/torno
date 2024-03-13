find_package(GTest REQUIRED)

include_directories (${TORNO_SOURCE_DIR})
add_executable(ranking_test ranking_test.cpp)

target_link_libraries(ranking_test gtest::gtest core)

add_test(NAME ranking_test COMMAND ranking_test)