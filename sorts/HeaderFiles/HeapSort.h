#ifndef ALGORITHMS_HEAPSORT_H
#define ALGORITHMS_HEAPSORT_H

class HeapSort{
public:
    void swap(int[], int, int);

    void heapify(int[], int, int);

    void heapSort(int[], int);
};

#endif