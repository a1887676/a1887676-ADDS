#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"
#include <string>

class Pirate : public Move {

public:
 bool winsAgainst(Move*opponent);
 std::string getName();
};

#endif
