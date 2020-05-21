#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Menu.h"

using std::cout;
using std::cin;
using std::endl;

void Menu::display_menu_options(){
  int i {0};
  int options_size {(int)_options.size()};

  cout << "Your options are: ";
  for(auto const &option : _options){
    cout 
      << "[" 
      << option.first 
      << "]"
      << option.second;
    if(i == options_size - 1)
      cout << " ";
    else
      cout << " | ";
    i++;
  }
  cout << endl;
}

void Menu::main_menu(){
  cout << "Welcome to cpp fight! " << endl;
  if(!_gameplay->has_player()){
    cout << "Lets begin with creating a character" << endl;
    _gameplay->create_character();
  }
  display_menu_options();
}
