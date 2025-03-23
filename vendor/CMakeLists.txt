# vendor/CMakeLists.txt

include(FetchContent)

FetchContent_Declare(
        cppbase
        GIT_REPOSITORY  "https://github.com/hi-im-vika/cppbase.git"
        GIT_TAG         origin/main
)

add_subdirectory(cppbase)