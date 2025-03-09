#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {

std::string playerName;
std::cout << "Enter name: ";
std::cin >> playerName; 

Human h1(playerName);
Computer c1;
Referee r1;

Player* winner = r1.startGame(&h1,&c1);

if (winner == nullptr) {
    std::cout << "It's a Tie." << std::endl;
    }else {
        std::cout << winner->getName() << "Wins." << std::endl; 
    }

    return 0;
}


