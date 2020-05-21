#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include "Character.h"

enum GameState {
  menu,
  fight
};

class Gameplay{
  private:
    Character _player;
    GameState current_state;

  public:
    bool set_player(Character player);
    Character get_player();
    void main_loop();
};

#endif
