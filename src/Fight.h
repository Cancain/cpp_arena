#include "Character.h"

class Fight{
  private:
    Character *_player;
    Character *_opponent;

  public:
    void fight();

    Fight(Character *player, Character *opponent){
      _player = player;
      _opponent = opponent;
    }

};
