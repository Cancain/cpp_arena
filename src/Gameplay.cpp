#include "Gameplay.h"
#include <iostream>

Character Gameplay::get_player(){
  return _player;
}

bool Gameplay::set_player(Character new_player){

  if(new_player.get_name() == ""){
    throw "expected player name";
    return false;
  }

  while(new_player.is_dead()){
    std::cout << "Your player is dead, creating a new one..." << std::endl;
    new_player.create_character();
  }

  _player = new_player;
  return true;
}

void Gameplay::main_loop(){
  while(_game_on){
    std::cout << "main_loop" << std::endl;
    end_game();
  }
}

void Gameplay::start_game(){
  _game_on = true;
  main_loop();
}

void Gameplay::end_game(){
  _game_on = false;
}


// Constructors

