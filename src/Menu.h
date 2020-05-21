#include "Gameplay.h"

class Menu{
  private:
    Gameplay *_gameplay;

  public: 
    void main_menu();

    Menu(Gameplay *gameplay){
      _gameplay = gameplay;
    }

    ~Menu(){
      delete _gameplay;
    }
};
