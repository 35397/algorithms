#ifndef DOUBLESELECTIONSORT_H
#define DOUBLESELECTIONSORT_H

class DoubleSelectionSort{
private:
    int *a;
    int n;
public:
    void SetParameters(int *, int);

    int* getArr();
    int getSize();


    void double_selection_sort();
};

#endif