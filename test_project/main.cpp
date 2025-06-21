#include <pokeplus/pokeplus.hpp>


int main() {
    if (!PokePlusLib::Init())
        return -1;
    if (!PokePlusLib::OpenWindow("TestProject", 640, 480))
        return -2;
    PokePlusLib::Loop();
    PokePlusLib::CloseWindow();
    PokePlusLib::Quit();
    return 0;
}