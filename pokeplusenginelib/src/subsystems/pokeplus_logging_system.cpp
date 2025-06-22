#include <cstdarg>
#include <pokeplus/pokeplus_subsystems.hpp>
#include <SDL3/SDL.h>

namespace PokePlusLib {
    void LogDebug(const char *fmt, ...) {
        va_list args;
        va_start(args, fmt);
        SDL_LogMessageV(SDL_LOG_CATEGORY_CUSTOM, SDL_LOG_PRIORITY_DEBUG, fmt, args);
        va_end(args);
    }
}
