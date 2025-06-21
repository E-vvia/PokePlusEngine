#ifndef POKEPLUS_SCENE_SYSTEM_HPP
#define POKEPLUS_SCENE_SYSTEM_HPP
#include <pokeplus/scenes/scene.hpp>

namespace PokePlusLib {
    Scene* GetActiveScene();
    void SetActiveScene(Scene* scene);
}
#endif //POKEPLUS_SCENE_SYSTEM_HPP
