#include <pokeplus/subsystems/pokeplus_scene_system.hpp>

namespace PokePlusLib {
    Scene* _active_scene = nullptr;

    Scene* GetActiveScene() {
        return _active_scene;
    }
    void SetActiveScene(Scene* scene) {
        _active_scene = scene;
    }
}