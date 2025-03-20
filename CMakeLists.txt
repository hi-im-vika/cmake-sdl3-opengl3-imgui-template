cmake_minimum_required(VERSION 3.10)
project(myproject)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(vendor)
find_package(OpenGL REQUIRED)
find_package(spdlog REQUIRED)

add_executable(myproject src/CMain.cpp)
target_link_libraries(myproject cppbase ${OPENGL_LIBRARY} imgui)