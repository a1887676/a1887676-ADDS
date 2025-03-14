#include "Paper.h"
#include <string>

bool Paper::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Rock"){
        return true;
    }
    return false;
}

std::string Paper::getName(){
    return "Paper";
}