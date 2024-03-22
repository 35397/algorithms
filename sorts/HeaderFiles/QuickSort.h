#ifndef QUICKSORT_H
#define QUICKSORT_H

class QuickSort{
public:
    int partition(int *a, int start, int end);

    void quickSort(int *a, int start, int end);
};
#endif