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

bool Menu::is_valid_menu_choice(char choice){
  bool choice_exists {false};

  for(auto &option : _options){
    if(choice == option.first)
      choice_exists = true;
  }

  return choice_exists;
}

char Menu::get_menu_input(){
  bool successful_input {false};
  char input;
  while(!successful_input){
    cin >> input;

    if(is_valid_menu_choice(input)) {
      successful_input = true;
    } else {
      cout << "Please enter an option from the menu" << endl;
      display_menu_options();
      cin.clear();
    }
  }

  return input;
}

void Menu::main_menu(){
  cout << "Welcome to cpp fight! " << endl;

  if(!_gameplay->has_player()){
    cout << "Lets begin with creating a character" << endl;
    _gameplay->create_character();
  }

  display_menu_options();
  char input {get_menu_input()};
}
