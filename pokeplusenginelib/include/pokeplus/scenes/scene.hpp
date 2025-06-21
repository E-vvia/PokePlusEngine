#ifndef SCENE_HPP
#define SCENE_HPP

namespace PokePlusLib {
    class Scene {
    public:
        Scene();

        virtual void Update() = 0;

        ~Scene();
    };
}
#endif //SCENE_HPP
