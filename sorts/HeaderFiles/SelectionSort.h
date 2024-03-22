#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

class SelectionSort{
private:
    int *a;
    int n;
public:
    void SetParameters(int *, int);

    int* getArr();
    int getSize();

    void selection_sort();
};

#endif