#include "Rock.h"
#include <string>

bool Rock::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Scissors"){
        return true;
    }
    return false;
}

std::string Rock::getName(){
    return "Rock";
}