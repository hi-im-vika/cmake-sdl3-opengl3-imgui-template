# vendor/cppbase/CMakeLists.txt
message(STATUS "Fetching cppbase...")

FetchContent_MakeAvailable(cppbase)
target_include_directories(cppbase PUBLIC ${cppbase_SOURCE_DIR}/include)