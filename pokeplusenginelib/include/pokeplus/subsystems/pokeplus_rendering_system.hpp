#ifndef  POKEPLUS_RENDERING_SYSTEMS_HPP
#define POKEPLUS_RENDERING_SYSTEMS_HPP

namespace PokePlusLib {
    bool OpenWindow(const char* title, int width, int height);
    bool RenderClear();

    bool RenderPresent();

    void CloseWindow();
}

#endif // POKEPLUS_RENDERING_SYSTEMS_HPP
