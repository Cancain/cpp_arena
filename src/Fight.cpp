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
