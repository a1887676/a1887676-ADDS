#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"
#include <string>

class Scissors : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName();
};

#endif
