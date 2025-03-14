#include "Zombie.h"
#include <string>

bool Zombie::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Pirate"||opponentMove=="Monkey"){
        return true;
    }
    return false;
}

std::string Zombie::getName(){
    return "Zombie";
}