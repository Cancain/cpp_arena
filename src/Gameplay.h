#ifndef _GAMEPLAY_H_
#define _GAMEPLAY_H_

#include "Character.h"

class Gameplay{
  private:
    Character player;

  public:
    bool set_player(Character player);
    Character get_player();
};

#endif
