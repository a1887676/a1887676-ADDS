#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    recursive(list, 0, list.size()-1,);
    return list;
}

void QuickSort::recursive(std::vector<int>& list, int low, int high){
    if(low<high) {
        int pivot = divide(list, low, high);
        recursive(list, low, pivot-1);
        recursive(list, pivot+1, high);
    }
}

int QuickSort::divide(std::vector<int>& list, int low, int high) {
    int index = (high-low+1>=3) ? low+2 : high;
    int pivot = list[index];

    std::swap(list[index], list[high]);

    int i = low - 1;
    for(int j=low;j<high;j++){
        if(list[j]<=pivot){
            i++
            std::swap(list[i], list[j]);
        }
    }
    std::swap(list[i+1], list[high]);
    return i+1;
}