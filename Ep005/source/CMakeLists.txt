cmake_minimum_required(VERSION 3.5)
project(
    PractiseApp
    VERSION 1.0.0
    DESCRIPTION "Practise what I have learnt in cmake so far"
    LANGUAGES CXX
)

add_executable(PractiseAppBinary main.cpp src/cat.cpp src/operations.cpp)

target_compile_features(PractiseAppBinary PRIVATE cxx_std_20)

target_include_directories(PractiseAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)