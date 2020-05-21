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
    Character *_player;
    GameState _current_state;

    void main_loop();

  public:
    bool get_game_on();
    void start_game();
    void end_game();

    GameState get_game_state();
    void set_game_state(GameState state);

    bool set_player(Character *player);
    bool has_player();

    // Constructors
    Gameplay(){
      _current_state = menu;
      _player = nullptr;
      start_game();
    }
};


#endif
