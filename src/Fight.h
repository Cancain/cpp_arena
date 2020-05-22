#ifndef _FIGHT_H
#define _FIGHT_H

#include "Character.h"
#include <map>

struct CharacterInitiative {
  int initiative;
  Character character;
};

class Fight{
  private:
    Character *_player;
    Character *_opponent;

    void annouce_fight();
    void get_turn_order(
        Character *characters,
        CharacterInitiative *turn_order,
        size_t turn_order_size = 2
        );


  public:
    void fight();

    Fight(Character *player, Character *opponent);

};

#endif
