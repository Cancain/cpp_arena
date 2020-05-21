#include <map>
#include "Gameplay.h"

class Menu{
  private:
    Gameplay *_gameplay;
    std::map<const char, std::string> _options;

    void _display_menu_options();
    char _get_menu_input();
    bool _is_valid_menu_choice(char choice);
    void _start_fight();

  public: 
    void main_menu();

    Menu(Gameplay *gameplay){
      _gameplay = gameplay;

      _options['c'] = "Create new character";
      _options['f'] = "Fight!";
      _options['q'] = "Quit";
    }

    ~Menu(){
      delete _gameplay;
    }
};
