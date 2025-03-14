#include "Ninja.h"
#include <string>

bool Ninja::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Pirate"||opponentMove=="Zombie"){
        return true;
    }
    return false;
}

std::string Ninja::getName(){
    return "Ninja";
}