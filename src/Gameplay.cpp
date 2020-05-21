#include <iostream>
#include "Gameplay.h"
#include "Menu.h"

// Player
bool Gameplay::has_player(){
    if(_player == nullptr) return false;
    return true;
}
bool Gameplay::set_player(Character *player){

  if(player->get_name() == ""){
    throw "expected player name";
    return false;
  }

  while(player->is_dead()){
    std::cout << "Your player is dead, creating a new one..." << std::endl;
    player->create_character();
  }

  _player = player;
  return true;
}

// Game state
GameState Gameplay::get_game_state(){
  return _current_state;
}

void Gameplay::set_game_state(GameState state){
  _current_state = state;
}

// Start/end game
void Gameplay::main_loop(){
  Menu menu(this);
  menu.main_menu();
}

void Gameplay::start_game(){
  _game_on = true;
  main_loop();
}

void Gameplay::end_game(){
  _game_on = false;
}
