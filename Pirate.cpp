#include "Pirate.h"
#include <string>

bool Pirate::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Robot"||opponentMove=="Monkey"){
        return true;
    }
    return false;
}

std::string Pirate::getName(){
    return "Pirate";
}