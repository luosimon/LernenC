cmake_minimum_required(VERSION 3.0.0)
project(notsoeasy VERSION 0.1.0)

include(CTest)
enable_testing()
set (MAIN "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")

add_library(lib STATIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/util.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/lib/util.hpp")
add_executable(ep "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
target_include_directories(ep PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib")
target_link_libraries(ep lib)

message(STATUS "MAIN=${MAIN}")
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
