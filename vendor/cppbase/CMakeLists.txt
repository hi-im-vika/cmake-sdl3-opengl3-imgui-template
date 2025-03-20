# vendor/vika-net/CMakeLists.txt
message(STATUS "Fetching cppbase...")

FetchContent_GetProperties(cppbase)
if (NOT cppbase_POPULATED)
    FetchContent_Populate(cppbase)
endif ()

add_library(cppbase ${cppbase_SOURCE_DIR}/src/CBase.cpp ${cppbase_SOURCE_DIR}/include/CBase.hpp)
target_include_directories(cppbase PUBLIC ${cppbase_SOURCE_DIR}/include)

FetchContent_MakeAvailable(cppbase)