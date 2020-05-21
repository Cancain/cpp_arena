#include <iostream>
#include "Gameplay.h"
#include "Menu.h"

// Player
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

bool Gameplay::has_player(){
    if(_player == nullptr) return false;
    return true;
}

Character* Gameplay::get_player(){
  return _player;
}

void Gameplay::set_player_name_from_input(Character *player){
  std::string name;

  std::cout << 
    "Please enter the name of your new character: ";
  std::cin >> name;

  while(!player->set_name(name)){
    std::cout << 
      "Character name must be between 3 and 14 characters long\n Please try again: ";
    std::cin >> name;
  }
}

void Gameplay::create_character(){
  delete _player;
  Character *player = new Character();
  set_player_name_from_input(player);
  _player = player;
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
  Menu *menu = new Menu(this);
  menu->main_menu();
}

void Gameplay::start_game(){
  _game_on = true;
  main_loop();
}

void Gameplay::end_game(){
  _game_on = false;
}
