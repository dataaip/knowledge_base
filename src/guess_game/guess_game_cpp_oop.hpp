#pragma once 
#ifndef GUESS_GAME_CPP_OOP_HPP
#define GUESS_GAME_CPP_OOP_HPP

#include <random>

namespace game {    

class GuessGame {
public:
    GuessGame(int min = 1, int max = 100);
    void play();

private:
    std::random_device device;
    std::mt19937 engine;

    int max_range;
    int min_range;
    int secret_number;
    int guess_number;
    void display_welcome();
    auto generate_secret_number() -> int;
    auto get_input_number() -> int;
    void evaluate_guess();
};    

} // namespace game

#endif // GUESS_GAME_CPP_OOP_HPP