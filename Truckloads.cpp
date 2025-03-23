#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates<=loadSize){
        return 1;
    }
 int ifOddCrates;

 if (numCrates % 2 == 1){
    ifOddCrates=numCrates+1;
 } else {
    ifOddCrates=numCrates;
 }

int firstHalf = ifOddCrates/2;
int secondHalf = firstHalf - (ifOddCrates - numCrates);

return numTrucks(firstHalf, loadSize) + numTrucks(secondHalf, loadSize);


}