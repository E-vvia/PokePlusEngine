#ifndef POKEPLUS_MAIN_HPP
#define POKEPLUS_MAIN_HPP

namespace PokePlusLib{
    bool Init();

    bool Loop();

    void Quit();

    void SetTargetFps(unsigned int fps);

    unsigned int GetTargetFps();
}

#endif //POKEPLUS_MAIN_HPP
