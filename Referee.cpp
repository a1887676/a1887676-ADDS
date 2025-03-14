#include "Referee.h"


 Player* Referee::refGame(Player* player1, Player* player2) {
 Move* movePlayer1 = player1->makeMove();
 Move* movePlayer2 = player2->makeMove();

 if (movePlayer1->getName() == movePlayer2->getName()) { 
    return nullptr;
 }

 if (movePlayer1->winsAgainst(movePlayer2) == true ) {
    return player1;
 } else {
    return player2;
  }
 
 }
