set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEFENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(app ${SRC_FILES})
target_link_libraries(app PUBLIC myfoo)
# target_link_libraries(app PUBLIC absl::strings)