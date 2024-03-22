#ifndef RADIXSORT_H
#define RADIXSORT_H

class RadixSort{
    int* a;
    int n;
public:
    void SetParameters(int*, int);

    void countSortForRadix(int*, int, int);

    void radixSort();

};
#endif