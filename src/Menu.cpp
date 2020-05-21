#include <iostream>
#include <string>
#include "Menu.h"

using std::cout;
using std::cin;
using std::endl;

void Menu::main_menu(){
  cout << "Welcome to cpp fight! " << endl;
  if(!_gameplay->has_player()){
    cout << "Lets begin with creating a character" << endl;
    _gameplay->create_character();
  }
}
