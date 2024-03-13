add_executable(torno main.cpp)
add_subdirectory(core)

target_link_libraries(torno
  PRIVATE
    core
)
