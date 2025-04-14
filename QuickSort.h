#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort : public Sort {
    public:
    std::vector<int> sort(std::vector<int> list);

    private:
    void recursive(std::vector<int>& list, int low, int high);
    int divide(std::vector<int>& list, int low, int high);
};

#endif 