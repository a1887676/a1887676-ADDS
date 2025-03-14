#include <iostream>
#include <string>
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Paper.h"
#include "Rock.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"


int main() {

std::string playerName;
std::cout << "Enter name: ";
std::cin >> playerName; 

Human human(playerName);
Computer computer;
Referee referee;

Player* winner = referee.refGame(&human,&computer);

if (winner == nullptr) {
    std::cout << "It's a Tie." << std::endl;
    }else {
        std::cout << winner->getName() << "Wins." << std::endl; 
    }

    return 0;
}


