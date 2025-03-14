#ifndef NINJA_H
#define NINJA_H

#include "Move.h"
#include <string>

class Ninja : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName();
};

#endif
