#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include "Character.h"

enum GameState {
  menu,
  fight
};

class Gameplay{
  private:
    bool _game_on;
    Character _player;
    GameState current_state;

    void main_loop();

  public:
    bool get_game_on();
    void start_game();
    void end_game();

    bool set_player(Character player);
    Character get_player();

};

#endif
