#ifndef  POKEPLUS_RENDERING_SYSTEMS_HPP
#define POKEPLUS_RENDERING_SYSTEMS_HPP
#include <pokeplus/pokeplus_engine_defs.hpp>

namespace PokePlusLib {
    EXPORT bool OpenWindow(const char* title, int width, int height);
    INTERN bool RenderClear();

    INTERN bool RenderPresent();

    EXPORT void CloseWindow();
}

#endif // POKEPLUS_RENDERING_SYSTEMS_HPP
