#include "Robot.h"
#include <string>

bool Monkey::winsAgainst(Move*opponent){
    std::string opponentMove = opponent->getName();
    if(opponentMove=="Ninja"||opponentMove=="Zombie"){
        return true;
    }
    return false;
}

std::string Robot::getName(){
    return "Robot";
}