#include "Gameplay.h"

#include <map>

class Menu{
  private:
    Gameplay *_gameplay;
    std::map<const char, std::string> _options;

    void display_menu_options();
    char get_menu_input();

  public: 
    void main_menu();

    Menu(Gameplay *gameplay){
      _gameplay = gameplay;

      _options['c'] = "Create new character";
      _options['f'] = "Fight!";
    }

    ~Menu(){
      delete _gameplay;
    }
};
