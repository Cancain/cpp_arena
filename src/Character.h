#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

class Character{
  private: 
    std::string _name;
    int _strength;
    int _health;
    int _stamina;
    int _xp;
    bool _is_player;

  public:
    bool is_player();
    void set_is_player(bool is_player);

    bool set_name(std::string name);    
    std::string get_name();

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


    void add_xp(int xp);
    int get_xp();


    bool is_dead();
    
    void create_character();

    Character(
        bool is_player = false,
        std::string name = "", 
        int strength = 10, 
        int health = 100, 
        int stamina = 100, 
        int xp = 0);
};

#endif
