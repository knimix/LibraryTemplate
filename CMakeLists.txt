cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)

project(LibraryTemplate)
add_library(${PROJECT_NAME} SHARED src/library.cpp src/library.h include/LibraryTemplate/LibraryTemplate.h)
target_include_directories(${PROJECT_NAME} PUBLIC include)
set_target_properties(${PROJECT_NAME} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/build")

#add_subdirectory(testing)
