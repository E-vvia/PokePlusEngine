cmake_minimum_required(VERSION 3.31)
project(PokePlusEngineLib VERSION 1.0 LANGUAGES C CXX)
set(SRC_FILES
        src/pokeplus_main.cpp
        src/subsystems/pokeplus_rendering_system.cpp
        src/scenes/pokeplus_scene.cpp
        src/scenes/pokeplus_scene_manager.cpp
        src/subsystems/pokeplus_logging_system.cpp
        src/maps/pokeplus_tilemap.cpp
)

set(INCLUDE_HEADERS
        include/pokeplus/pokeplus.hpp
        include/pokeplus/pokeplus_main.hpp
        include/pokeplus/pokeplus_subsystems.hpp
        include/pokeplus/pokeplus_engine_defs.hpp
        include/pokeplus/subsystems/pokeplus_rendering_system.hpp
        include/pokeplus/scenes/pokeplus_scene_manager.hpp
        include/pokeplus/pokeplus_macros.hpp
        include/pokeplus/scenes/pokeplus_scene.hpp
        include/pokeplus/subsystems/pokeplus_logging_system.hpp
        include/pokeplus/maps/pokeplus_tilemap.hpp
        include/pokeplus/maps/pokeplus_map_manager.hpp
)

add_library(${PROJECT_NAME} ${SRC_FILES} ${INCLUDE_HEADERS})

target_include_directories(${PROJECT_NAME}
        PRIVATE
        "${PROJECT_SOURCE_DIR}/src"
        PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

set_target_properties(${PROJECT_NAME} PROPERTIES
        PUBLIC_HEADER "${INCLUDE_HEADERS}"
)

target_link_libraries(${PROJECT_NAME} PUBLIC
        SDL3::SDL3
)