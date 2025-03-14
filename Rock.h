#ifndef ROCK_H
#define ROCK_H

#include "Move.h"
#include <string>

class Rock : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName();
};

#endif
