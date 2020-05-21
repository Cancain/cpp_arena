#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

class Character{
  private: 
    int _strength;
    int _health;
    int _stamina;

    std::string _name;
    int _xp;

  public:
    int get_strength();
    void set_strength(int strength);

    int get_health();
    void set_health(int health);
    void add_health(int health);
    void subtract_health(int health);

    int get_stamina();
    void set_stamina(int stamina);
    void add_stamina(int stamina);
    void subtract_stamina(int stamina);

    bool set_name(std::string name);    
    std::string get_name();

    void add_xp(int xp);
    int get_xp();

    bool is_dead();
    
    void create_character();

    void default_character();

    Character(){
      default_character();
    }

    Character(std::string name){
      default_character();
      _name = name;
    };
};

#endif
