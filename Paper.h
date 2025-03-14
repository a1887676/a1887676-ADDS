#ifndef PAPER_H
#define PAPER_H

#include "Move.h"
#include <string>

class Paper : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName(){
    return "Paper";
 }
};

#endif
