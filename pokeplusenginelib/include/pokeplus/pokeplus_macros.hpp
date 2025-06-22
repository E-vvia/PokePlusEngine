#ifndef POKEPLUS_MACROS_HPP
#define POKEPLUS_MACROS_HPP
#define SDL_CHECK(fn_call, error_title) ((fn_call) ? true : (SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, error_title, SDL_GetError(), nullptr), false))
#endif //POKEPLUS_MACROS_HPP
