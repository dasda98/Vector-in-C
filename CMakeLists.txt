cmake_minimum_required(VERSION 3.28)
project(Vector_in_C C)

set(CMAKE_C_STANDARD 17)
set(INCLUDE_DIRS
        ${PROJECT_SOURCE_DIR}/include
)
set(SOURCES
        ${PROJECT_SOURCE_DIR}/main.c
        ${PROJECT_SOURCE_DIR}/src/vector.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_DIRS})