#include "Human.h"
#include"Paper.h"
#include"Scissors.h"
#include"Rock.h"
#include"Monkey.h"
#include"Ninja.h"
#include"Robot.h"
#include"Pirate.h"
#include"Zombie.h"

#include <iostream>

Human::Human() : name("Human"){}
Human::Human(std::string name) : name(name){}

Move* Human::makeMove() {
    Move* move=nullptr;
    std::string input;
    
    std::cout << this->getName() << " Enter Move: ";
    std::cin >> input;
    
    if(input=="Paper"){move=new Paper;}
    if(input=="Scissors"){move=new Scissors;}
    if(input=="Rock"){move=new Rock;}
    if(input=="Monkey"){move=new Monkey;}
    if(input=="Ninja"){move=new Ninja;}
    if(input=="Robot"){move=new Robot;}
    if(input=="Pirate"){move=new Pirate;}
    if(input=="Zombie"){move=new Zombie;}

    return move;
}

std::string Human::getName() {
    return name;
}