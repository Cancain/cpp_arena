#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include "Character.h"

enum GameState {
  menu,
  fight
};

class Gameplay{
  private:
    // Properties
    bool _game_on;
    Character *_player;
    GameState _current_state;

   void set_player_name_from_input(Character *player);

    // Start/end game
    void main_loop();

  public:
    // Start/end game
    bool get_game_on();
    void start_game();
    void end_game();

    // Game state
    GameState get_game_state();
    void set_game_state(GameState state);

    // Player
    bool set_player(Character *player);
    Character* get_player();
    bool has_player();
    void create_character();

    // Constructors
    Gameplay();

    //Deconstructor
    ~Gameplay();
};


#endif
