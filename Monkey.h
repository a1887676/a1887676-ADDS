#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"
#include <string>

class Monkey : public Move {

public:
 bool winsAgainst(Move*opponent);
 
 std::string getName();
};

#endif
