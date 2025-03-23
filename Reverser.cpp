#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if(value<0){
        return -1;
    }

    if(value<10){
        return value;
    }

    int endDigit = value % 10;
    int otherNums = value / 10;
    int length = std::to_string(otherNums).length();

    int posMultiplier = std::pow(10,length);

    return endDigit*posMultiplier+reverseDigit(otherNums);
 
}

std::string Reverser::reverseString(std::string characters) {
    if(characters.length()<=1) {
        return characters;
    }

    std::string otherString = characters.substr(0,characters.length()-1);

    return characters.back() + reverseString(otherString);

}