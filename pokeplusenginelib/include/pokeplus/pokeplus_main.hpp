#ifndef POKEPLUS_MAIN_HPP
#define POKEPLUS_MAIN_HPP
#include "pokeplus_engine_defs.hpp"

namespace PokePlusLib {
    EXPORT bool Init();

    EXPORT bool Loop();

    EXPORT void Quit();

    EXPORT void target_fps(unsigned int target_fps);

    EXPORT unsigned int target_fps();

    EXPORT float delta_time();
}

#endif //POKEPLUS_MAIN_HPP
