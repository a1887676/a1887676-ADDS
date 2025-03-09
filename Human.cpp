#include "Human.h"
#include <iostream>

Human::Human() : name("Human"){}
Human::Human(std::string name) : name(name){}

char Human::makeMove() {
    char move;
    std::cout << this->getName() << " Enter Move: ";
    std::cin >> move;
    return move;
}

std::string Human::getName() {
    return name;
}