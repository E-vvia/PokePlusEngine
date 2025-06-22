#include <pokeplus/pokeplus_subsystems.hpp>
#include <SDL3/SDL.h>

#include "pokeplus/pokeplus_macros.hpp"

namespace PokePlusLib {
    SDL_Window *_window = nullptr;
    SDL_Renderer *_renderer = nullptr;

    bool OpenWindow(const char *title, const int width, const int height) {
        return SDL_CHECK(SDL_CreateWindowAndRenderer(title, width, height, 0, &_window, &_renderer ),
                         "Couldn't create window and renderer");
    }

    bool RenderClear() {
        return SDL_CHECK(SDL_RenderClear(_renderer), "RenderClear error");
    }

    bool RenderPresent() {
        return SDL_CHECK(SDL_RenderPresent(_renderer), "RenderPresent error");
    }

    void CloseWindow() {
        SDL_DestroyRenderer(_renderer);
        SDL_DestroyWindow(_window);
        _renderer = nullptr;
        _window = nullptr;
    }
}
