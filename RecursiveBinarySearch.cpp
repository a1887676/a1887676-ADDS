#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {
    return recursive(list, 0, list.size()-1, element);
}

bool RecursiveBinarySearch::recursive(std::vector<int>& list, int low, int high, int element){
if(low<=high){
        int mid=low+(high-low)/2;
    if(list[mid] == element) {
        return true;
    } else if(list[mid] > element){
        return recursive(list, low, mid-1, element);
    } else{
        return recursive(list, mid+1, high, element);
     }
}
  return false; 
}