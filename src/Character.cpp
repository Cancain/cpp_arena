#include <iostream>
#include "Character.h"

//Strength
int Character::get_strength(){
  return _strength;
}

void Character::set_strength(int strength){
  _strength = strength;
}

// Health
int Character::get_health(){
  return _health;
};

void Character::set_health(int health){
  _health = health;
}

void Character::add_health(int health){
  _health += health;
}

void Character::subtract_health(int health){
  _health -= health;
}

// Stamina
int Character::get_stamina(){
  return _stamina;
}

void Character::set_stamina(int stamina){
  _stamina = stamina;
}

void Character::add_stamina(int stamina){
  _stamina += stamina;
}

void Character::subtract_stamina(int stamina){
  _stamina -= stamina;
}

// Name
bool Character::set_name(std::string name){
  if(name.length() >= 3 && name.length() < 14){
    _name = name;
    return true;
  }
  return false;
}

std::string Character::get_name(){
  return _name;
}


// XP
void Character::add_xp(int xp){
  _xp += xp;
}

int Character::get_xp(){
  return _xp;
}

// Is_player
 bool Character::is_player(){
   return _is_player;
 } 

void Character::set_is_player(bool is_player){
  _is_player = is_player;
}

// Other
bool Character::is_dead(){
  return get_health() <= 0;
}

void Character::create_character(){
  std::string name;
  int has_failed {false};

  while(!set_name(name)){
    if(has_failed)
      std::cout << "Name must be between 3-14 characters... try again: ";
    else
      std::cout << "Please enter the name of your character: ";

    std::cin >> name;
    has_failed = !set_name(name);
  }
}

// Constructors
  Character::Character(
      bool is_player,
      std::string name, 
      int strength,
      int health,
      int stamina,
      int xp
      )
    : _is_player{is_player}, _name{name},  _strength{strength}, _health{health}, _stamina{stamina}, _xp{xp}{

    }
