set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

file(GLOB_RECURSE SRC_FILES CONFIGURE_DEFENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# add_library(myfoo SHARED ${SRC_FILES})
# add_library(myfoo-static STATIC ${SRC_FILES})
add_library(myfoo STATIC ${SRC_FILES})

target_include_directories(
    myfoo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# target_include_directories(
#     myfoo-static PUBLIC
#     ${CMAKE_CURRENT_SOURCE_DIR}/include
# )

target_compile_options(myfoo PUBLIC -Wall)
target_compile_features(myfoo PUBLIC cxx_std_17)

# target_compile_options(myfoo-static PRIVATE -Wall)
# target_compile_features(myfoo-static PRIVATE cxx_std_17)