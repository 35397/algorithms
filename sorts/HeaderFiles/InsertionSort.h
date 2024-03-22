#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

class InsertionSort{
private:
    int *a;
    int n;
public:
    void SetParameters(int *, int);

    int* getArr();
    int getSize();


    void insertion_sort();
};
#endif