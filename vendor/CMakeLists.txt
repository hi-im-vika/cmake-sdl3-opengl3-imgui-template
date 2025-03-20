# vendor/CMakeLists.txt

include(FetchContent)

FetchContent_Declare(
        imgui
        GIT_REPOSITORY  "https://github.com/ocornut/imgui.git"
        GIT_TAG         origin/master
)

FetchContent_Declare(
        cppbase
        GIT_REPOSITORY  "https://github.com/hi-im-vika/cppbase.git"
        GIT_TAG         origin/main
)

add_subdirectory(imgui)
add_subdirectory(cppbase)