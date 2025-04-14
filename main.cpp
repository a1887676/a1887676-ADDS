#include <vector>
#include <string>
#include <vector>
#include <sstream>

#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {

std::string input;
std::getline(std::cinn, input);
std::stringstream ss(input);

std::vector<int> list 
int num;

while(ss>>number) {
    list.push_back(number);
}

QuickSort sort;
list = sort.sort(list);

RecursiveBinarySearch finder;
bool find = finder.search(list,1);

std::cout << (find ? "true" : "false");
for(int num : list) {
    std::cout << "" << num;
}
std::cout <<  std::endl;
return 0;

}