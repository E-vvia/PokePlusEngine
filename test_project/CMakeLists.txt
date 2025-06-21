cmake_minimum_required(VERSION 3.31)
project(TestProject VERSION 1.0 LANGUAGES C CXX)
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC
        SDL3::SDL3
        PokePlusEngineLib
)