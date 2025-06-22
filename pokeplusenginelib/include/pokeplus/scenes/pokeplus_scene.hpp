#ifndef SCENE_HPP
#define SCENE_HPP
#include <pokeplus/pokeplus_engine_defs.hpp>

namespace PokePlusLib {
    class Scene {
    public:
        EXPORT Scene();

        EXPORT virtual void Update() = 0;

        EXPORT ~Scene();
    };
}
#endif //SCENE_HPP
