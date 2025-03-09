#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>

class Human : public Player {
private:
 std::string name;

public: 
 Human();
 Human(std::string name);

 char makeMove();
 std::string getName();
   
};

#endif 