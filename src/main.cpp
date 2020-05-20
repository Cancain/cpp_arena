#include <iostream>
#include "Character.h"
#include "Gameplay.h"

int main(){
  Gameplay gameplay;
  Character player;

  player.create_character();
  gameplay.set_player(player);

  return 0;
}
