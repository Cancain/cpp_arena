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
    std::map<int, Character> *turn_order
    ){
    srand(time(nullptr));

    for(auto &character : *turn_order){
      std::cout << character.second.get_stamina() << std::endl;
    }
}

void Fight::fight(){
  annouce_fight();
  bool fight_on = !_player->is_dead() || !_opponent->is_dead();
  std::map<int, Character> turn_order;
  turn_order[0] = *_player;
  turn_order[1] = *_opponent;

  get_turn_order(&turn_order);
  
}



// Constructors
  Fight::Fight(Character *player, Character *opponent)
    :_player{player}, _opponent{opponent}{}
