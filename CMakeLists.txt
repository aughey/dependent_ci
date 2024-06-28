# CMakeLists files in this project can
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and
# to the root binary directory of the project as ${HELLO_BINARY_DIR}.
cmake_minimum_required (VERSION 3.18.0)
project (HELLO)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

if(MSVC)
  add_compile_options(PRIVATE /W4 /WX)
else()
  add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_subdirectory(src/lib)
add_subdirectory(src/app)

# 3rd party libraries
add_subdirectory(googletest)

# Our libraries
add_subdirectory(library1)

enable_testing()
add_subdirectory(src/tests)