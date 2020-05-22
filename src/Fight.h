#ifndef _FIGHT_H
#define _FIGHT_H

#include "Character.h"
#include <map>

class Fight{
  private:
    Character *_player;
    Character *_opponent;

    void annouce_fight();
    void get_turn_order(
        std::map<int, Character> *turn_order
        );


  public:
    void fight();

    Fight(Character *player, Character *opponent);

};

#endif
