#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
 virtual std::string getName()=0;
 virtual bool winsAgainst(Move* opponent)=0;
};

#endif