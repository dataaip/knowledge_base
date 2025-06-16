#ifndef GUESS_GAME_C_OP_H
#define GUESS_GAME_C_OP_H

typedef enum Difficulty {
  EASY,
  MEDIUM,
  HARD
} Difficulty;

typedef struct guess_game_state {
  int secret_number;
  int max_range;
  int min_range;
  int max_attempts;
  Difficulty difficulty;
} guess_game_state;

typedef struct multi_player_threads {
  guess_game_state game_state;
  int player_id;
} player_threads;

#endif // !GUESS_GAME_C_OP_H