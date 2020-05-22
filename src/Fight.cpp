#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <bits/stdc++.h>

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

bool fight_on(Character *characters, const size_t size = 2){
    for(size_t i {0}; i < size; ++i){
      if(characters[i].is_dead()) return false;
    }
    return true;
}

std::vector<CharacterInitiative> get_next_character(CharacterInitiative const *characters, const size_t size = 2){
  std::vector<CharacterInitiative> turn_order;
  for(size_t i {0}; i < size; ++i){
    turn_order.push_back(characters[i]);
  }

  std::sort(turn_order.begin(), turn_order.end());

  return turn_order;
}

void Fight::fight(){

  Character characters[2] {*_player, *_opponent};

  CharacterInitiative turn_order[2];

  annouce_fight();

  while(fight_on(characters, 2)) {
    get_turn_order(characters, turn_order);
    std::vector<CharacterInitiative> sorted_turn_order;
    sorted_turn_order = get_next_character(turn_order);
    int order_index {0};



    characters[0].set_health(0);
  }
  
}

// Constructors
  Fight::Fight(Character *player, Character *opponent)
    :_player{player}, _opponent{opponent}{}
