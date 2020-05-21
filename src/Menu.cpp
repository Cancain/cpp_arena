#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Menu.h"
#include "Fight.h"

using std::cout;
using std::cin;
using std::endl;

void Menu::_display_menu_options(){
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

bool Menu::_is_valid_menu_choice(const char choice){
  bool choice_exists {false};

  for(auto &option : _options){
    if(choice == option.first)
      choice_exists = true;
  }

  return choice_exists;
}

char Menu::_get_menu_input(){
  bool successful_input {false};
  char input;
  while(!successful_input){
    cin >> input;

    if(_is_valid_menu_choice(input)) {
      successful_input = true;
    } else {
      cout << "Please enter an option from the menu" << endl;
      _display_menu_options();
      cin.clear();
    }
  }

  return input;
}

void Menu::_start_fight(){
  Character *opponent = new Character("Enemy");
  Fight fight(_gameplay->get_player(), opponent);
  fight.fight();
}

void Menu::main_menu(){
  cout << "Welcome to cpp fight! " << endl;

  if(!_gameplay->has_player()){
    cout << "Lets begin with creating a character" << endl;
    _gameplay->create_character();
  }

  _display_menu_options();
  const char input {_get_menu_input()};

  switch(input){
    case 'c':
      _gameplay->create_character();
      main_menu();
      break;
    case 'f':
      _start_fight();
      break;
  }
}
