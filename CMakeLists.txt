cmake_minimum_required(VERSION 3.0.0)
project(TORNO VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()
add_subdirectory(tests)

add_executable(torno main.cpp)
add_subdirectory(core)

target_link_libraries(torno
  PRIVATE
    core
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
