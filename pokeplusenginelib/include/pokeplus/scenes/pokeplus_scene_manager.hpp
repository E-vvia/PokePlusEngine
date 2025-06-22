#ifndef POKEPLUS_SCENE_MANAGER_HPP
#define POKEPLUS_SCENE_MANAGER_HPP
#include <pokeplus/pokeplus_engine_defs.hpp>
#include <pokeplus/scenes/pokeplus_scene.hpp>

namespace PokePlusLib {
    EXPORT Scene* active_scene();
    EXPORT void active_scene(Scene* scene);
}
#endif //POKEPLUS_SCENE_MANAGER_HPP
