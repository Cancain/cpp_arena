#include <iostream>
#include "Character.h"

// Health
int Character::get_health(){
  return health;
};

void Character::set_health(int health){
  Character::health = health;
}

void Character::add_health(int health){
  Character::health += health;
}

void Character::subtract_health(int health){
  Character::health -= health;
}

// Stamina
int Character::get_stamina(){
  return Character::stamina;
}

void Character::set_stamina(int stamina){
  Character::stamina = stamina;
}

void Character::add_stamina(int stamina){
  Character::stamina += stamina;
}

void Character::subtract_stamina(int stamina){
  Character::stamina -= stamina;
}

// Name
bool Character::set_name(std::string name){
  if(name.length() >= 3 && name.length() < 14){
    Character::name = name;
    return true;
  }
  return false;
}

std::string Character::get_name(){
  return Character::name;
}


// XP
void Character::add_xp(int xp){
  Character::xp += xp;
}

int Character::get_xp(){
  return Character::xp;
}

// Other
bool Character::is_dead(){
  return Character::get_health() <= 0;
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
