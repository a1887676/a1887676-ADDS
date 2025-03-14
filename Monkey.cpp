#include "Monkey.h"
#include <string>

bool Monkey::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Ninja"||opponentMove=="Robot"){
        return true;
    }
    return false;
}

std::string Monkey::getName(){
    return "Monkey";
}