#include <iostream>
#include "Character.h"
#include "Gameplay.h"

int main(){
  Gameplay gameplay;
  Character *player = new Character("Player");

  player->create_character();
  gameplay.set_player(*player);
  
  gameplay.start_game();

  delete player;

  return 0;
}
