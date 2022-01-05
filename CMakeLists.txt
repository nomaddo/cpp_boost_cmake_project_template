cmake_minimum_required (VERSION 3.14)
enable_testing()
project ("Template project")

set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Wall -Wextra -pedantic -Werror)

# https://github.com/Orphis/boost-cmake
add_subdirectory(boost-cmake)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)  # Require 3.14

add_subdirectory ("src")
add_subdirectory ("test")
