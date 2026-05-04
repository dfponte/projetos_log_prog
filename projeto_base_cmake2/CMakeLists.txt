

cmake_minimum_required(VERSION 3.10)
project(aula_cmake_c10)

add_library(my_math
         projeto_base_cmake/src/math.c
         )

add_library(my_info1
         projeto_base_cmake/src/infox.c
         )

add_executable(MeuExecutavel main.c)

target_include_directories(MeuExecutavel PRIVATE projeto_base_cmake/inc)

target_link_libraries(MeuExecutavel PRIVATE my_math my_info1)


