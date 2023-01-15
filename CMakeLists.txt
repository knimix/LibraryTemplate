cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(DEPENDENCIES_HOME "/home/konrad/Dependencies")

project(LibraryTemplate)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.h src/*.c)
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME})
add_subdirectory(cmake)
AddLibrary("MathLibrary")

add_subdirectory(tests)
