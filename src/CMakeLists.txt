add_subdirectory(libr)
add_executable(main main.cpp)
target_link_libraries(main libr)