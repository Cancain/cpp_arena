#include <iostream>
#include "Fight.h"

void Fight::fight(){
  std::cout 
    << "There will be a fight between " 
    << _player->get_name() 
    << " and " 
    << _opponent->get_name() 
    << std::endl;
}

// Constructors
  Fight::Fight(Character *player, Character *opponent)
    :_player{player}, _opponent{opponent}{}
