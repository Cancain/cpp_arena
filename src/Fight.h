#ifndef _FIGHT_H
#define _FIGHT_H

#include "Character.h"

class Fight{
  private:
    Character *_player;
    Character *_opponent;

  public:
    void fight();

    Fight(Character *player, Character *opponent);

};

#endif
