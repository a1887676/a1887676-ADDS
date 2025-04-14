#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
int num=list.size();

for(i=0;i<num-1;i++){
    for(j=0;j<num-i-1;j++){

        if(list[j]>list[j+1]){
            std::swap(list[j], list[j+1]);
        }
    }
}

return list;
}