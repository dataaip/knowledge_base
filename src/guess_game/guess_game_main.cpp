#include "guess_game_cpp.hpp"
#include "guess_game_cpp_oop.hpp"

auto main() -> int {
    // guess_game_cpp();
    
    game::GuessGame guessGame;
    guessGame.play();

    return 0;
}