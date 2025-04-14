#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{
    public:
    bool search(std::vector<int>, int element);

    private:
    bool recursive(std::vector<int>& list, int element, int low, int high);
};

#endif 