#ifndef BUBBLESORT_H
#define BUBBLESORT_H

class BubbleSort{
    int* a;
    int n;
public:
    void SetParameters(int* , int);

    int* getArr();
    int getSize();

    void bubble_sort();
};

#endif