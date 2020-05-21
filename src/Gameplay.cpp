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

}
