#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "Fight.h"

void Fight::annouce_fight(){
  std::cout 
    << "There will be a fight between " 
    << _player->get_name() 
    << " and " 
    << _opponent->get_name() 
    << std::endl;
}

void Fight::get_turn_order(
      Character *characters,
      CharacterInitiative *turn_order,
      size_t turn_order_size
    ){

    srand(time((nullptr)));
  for(size_t i {0}; i < turn_order_size; ++i){

    CharacterInitiative newInitiative = {
      rand() % characters[i].get_stamina(),
      characters[i]
    };

    turn_order[i] = newInitiative;
  }

}

void Fight::fight(){
  annouce_fight();
  Character characters[2] {*_player, *_opponent};
  bool fight_on = !_player->is_dead() || !_opponent->is_dead();

  CharacterInitiative turn_order[2];
  get_turn_order(characters, turn_order);
  
}

// Constructors
  Fight::Fight(Character *player, Character *opponent)
    :_player{player}, _opponent{opponent}{}
