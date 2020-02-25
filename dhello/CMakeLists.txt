cmake_minimum_required(VERSION 3.0.0)
project(dhello VERSION 0.1.0)

include(CTest)
enable_testing()

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

# library
#add_library(lib_factorial STATIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/factorial.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/lib")

#add libraries to 001-TestCase
add_library(Catch2 INTERFACE)
set(CATCH_INCLUE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
message(STATUS "CATCH_INCLUE_DIR = ${CATCH_INCLUE_DIR}")
target_include_directories(Catch2 INTERFACE "${CATCH_INCLUE_DIR}")


set (TEST_001 "${CMAKE_CURRENT_SOURCE_DIR}/test/001-TestCase.cpp")
message(STATUS "TEST_001 = ${TEST_001}")
add_executable(tcone ${TEST_001})
target_include_directories(tcone PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib")
target_link_libraries(tcone Catch2)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
