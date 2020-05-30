#ifndef _ACTION_H_
#define _ACTION_H_

#include <string>
#include <vector>
#include "Character.h"

class Action{
  private:
    std::string _name;
    Attribute _attribute;
    int _requirement;

  public:
    void execute();
    Action(std::string name, Attribute attribute, int requirement);
};

#endif
