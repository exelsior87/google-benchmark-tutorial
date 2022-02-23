set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEFENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(app ${SRC_FILES})
target_link_libraries(app PUBLIC myfoo)
target_link_libraries(app PUBLIC absl::strings)