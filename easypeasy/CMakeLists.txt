cmake_minimum_required(VERSION 3.0.0)
project(easypeasy VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

#Source Files
set (MAIN "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
add_executable(ep ${MAIN})

#add libraries to main
add_library(lib STATIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/util.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/lib/util.hpp")
target_include_directories(ep PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib")
target_link_libraries(ep lib)

#add libraries to 001_TEST_CASE
add_library(catch2 INTERFACE)
target_include_directories(catch2 INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(lib_factorial STATIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/factorial.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/lib/factorial.hpp")

set (001_TEST_CASE "${CMAKE_CURRENT_SOURCE_DIR}/test/001_TEST_CASE.cpp")
add_executable(tcone ${001_TEST_CASE})
target_include_directories(tcone PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib")
target_link_libraries(tcone catch2 lib_factorial)

#message(STATUS "MAIN=${MAIN}")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

#include(Catch)

include(CPack)
