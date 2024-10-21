cmake_minimum_required(VERSION 3.10)
project(YourProjectName)

set(CMAKE_CXX_STANDARD 17)

# src içindeki tüm dosyaları ekle
file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
