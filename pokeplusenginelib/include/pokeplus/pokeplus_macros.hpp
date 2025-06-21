#ifndef POKEPLUS_MACROS_HPP
#define POKEPLUS_MACROS_HPP
#define SDL_CHECK(fn_call, error_title) do { if (!(fn_call)) { SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, error_title, SDL_GetError(), nullptr); return false; } else { return true; } } while (0)
#endif //POKEPLUS_MACROS_HPP
