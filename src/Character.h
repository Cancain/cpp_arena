#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string>

class Character{
  private: 
    int health {100};
    int stamina {100};
    std::string name {};
    int xp {0};

  public:
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
};

#endif
