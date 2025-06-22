#include <pokeplus/scenes/pokeplus_scene_manager.hpp>

namespace PokePlusLib {
    Scene* _active_scene = nullptr;

    Scene* active_scene() {
        return _active_scene;
    }
    void active_scene(Scene* scene) {
        _active_scene = scene;
    }
}