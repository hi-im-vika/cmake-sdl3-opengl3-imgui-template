cmake_minimum_required(VERSION 3.10)
project(myproject)

set(CMAKE_CXX_STANDARD 17)
set(OpenGL_GL_PREFERENCE LEGACY)
add_executable(myproject src/CMain.cpp)

add_subdirectory(vendor)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE cppbase)

find_package(imgui CONFIG REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE imgui::imgui)

find_package(OpenGL REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE OpenGL::GL)

find_package(spdlog CONFIG REQUIRED)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE spdlog::spdlog_header_only)