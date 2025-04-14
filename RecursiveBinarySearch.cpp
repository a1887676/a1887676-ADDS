#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int element) {
    return recursive(list, 0, list.size()-1, element);
}

bool RecursiveBinarySearch::recursive(std::vector<int>& list, int low, int high, int element){
if(low<=high){
        int mid=low+(high-low)/2;
    if(list[mid] == target) {
        return true;
    } else if(list[mid] < target){
        return recursive(list, mid+1, high);
    } else{
        return recursive(list, low, mid-1);
     }
}
  return false; 
}