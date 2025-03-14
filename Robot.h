#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"
#include <string>

class Robot : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName(){
    return "Robot";
 }
};

#endif
