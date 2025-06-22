#ifndef TILEMAP_HPP
#define TILEMAP_HPP
#include <pokeplus/pokeplus_engine_defs.hpp>

namespace PokePlusLib {
    class TileMap {
    private:
        int _width, _height;
        int *_tiles;

    public:
        INTERN explicit TileMap();
        EXPORT ~TileMap();
    };
}
#endif //TILEMAP_HPP
