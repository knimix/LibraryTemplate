cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
project(LibraryTemplate)

add_library(LibraryTemplate SHARED library.cpp library.h)
set_target_properties(${PROJECT_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/build")

if( CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR )
add_subdirectory(testing)
else()
    include_directories(include)
endif()