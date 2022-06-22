enable_testing()

include(FetchContent)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS NO)

set(CMAKE_BUILD_TYPE Debug)

# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)

FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.6.1
)

FetchContent_MakeAvailable(
    googletest
    googlebenchmark
)

add_executable(bm_myfoo bm_myfoo.cpp)
# target_link_libraries(bm_myfoo PUBLIC myfoo benchmark::benchmark)
target_link_libraries(bm_myfoo PRIVATE benchmark::benchmark myfoo)