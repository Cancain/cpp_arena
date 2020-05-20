#include <iostream>
#include "Character.h"
#include "Gameplay.h"

int main(){
  Gameplay gameplay;
  Character player;

  player.create_character();

  std::cout << player.get_name() << std::endl;

  return 0;
}
