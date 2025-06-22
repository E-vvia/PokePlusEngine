#include <pokeplus/pokeplus_main.hpp>
#include <pokeplus/pokeplus_macros.hpp>
#include <pokeplus/pokeplus_subsystems.hpp>
#include <pokeplus/scenes/pokeplus_scene.hpp>

#include <SDL3/SDL.h>


namespace PokePlusLib {
    static unsigned int _target_fps = 60;
    static constexpr int MAX_DELAY_MS = 2;
    static float _current_fps;
    static double _delta_time;

    bool Init() {
        if (!SDL_CHECK(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_EVENTS), "SDL Init error")) {
            return false;
        }
#ifndef NDEBUG
        SDL_SetLogPriorities(SDL_LOG_PRIORITY_DEBUG);
#endif
        return true;
    }

    bool Loop() {
        SDL_Event event;
        bool quit = false;

        Uint64 perf_freq = SDL_GetPerformanceFrequency();
        Uint64 last_update = SDL_GetPerformanceCounter();
        double since_render_ms = 0;
        double since_second_ms = 0;
        float fps_counter = 0;

        while (!quit) {
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_EVENT_QUIT) {
                    quit = true;
                }
            }

            const float expected_frame_duration = 1000.0f / static_cast<float>(_target_fps);
            const Uint64 current_update = SDL_GetPerformanceCounter();
            const Uint64 elapsed_since_update = current_update - last_update;
            const double since_update_ms = 1000.0 * static_cast<double>(elapsed_since_update) / static_cast<double>(
                                               perf_freq);

            since_second_ms += since_update_ms;
            since_render_ms += since_update_ms;

            last_update = current_update;

            if (since_render_ms >= expected_frame_duration) {
                if (!RenderClear()) {
                    return false;
                }
                Scene *current_scene = active_scene();
                if (current_scene != nullptr)
                    current_scene->Update();
                RenderPresent();
                _delta_time = since_render_ms;
                since_render_ms = 0;
                fps_counter++;
            } else if (expected_frame_duration - since_render_ms >= MAX_DELAY_MS) {
                SDL_Delay(1);
            }

            if (since_second_ms >= 1000) {
                _current_fps = fps_counter;
                fps_counter = 0;
                since_second_ms = 0;
                LogDebug("FPS: %f", _current_fps);
            }
        }

        return true;
    }

    void Quit() {
        SDL_Quit();
    }

    void target_fps(const unsigned int target_fps) {
        _target_fps = target_fps;
    }

    unsigned int target_fps() {
        return _target_fps;
    }

    float delta_time() {
        return _delta_time;
    }
}
