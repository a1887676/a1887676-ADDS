#include "Scissors.h"
#include <string>

bool Scissors::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Paper"){
        return true;
    }
    return false;
}

std::string Scissors::getName(){
    return "Scissors";
}