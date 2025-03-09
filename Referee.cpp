#include "Referee.h"


 Player* Referee::startGame(Player* player1, Player* player2) {
 char movePlayer1 = player1->makeMove();
 char movePlayer2 = player2->makeMove();

 if (movePlayer1 == movePlayer2) {
    return nullptr;
 }

 if ((movePlayer1=='R' && movePlayer2=='S') || (movePlayer1=='S' && movePlayer2=='P') || (movePlayer1=='P' && movePlayer2=='R')) {
    return player1;
 } else {
    return player2;
  }
 
 }
