#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"
#include <string>

class Zombie : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName();
};

#endif
