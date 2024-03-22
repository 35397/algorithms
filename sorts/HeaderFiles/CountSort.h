#ifndef  COUNTSORT_H
#define COUNTSORT_H
class CountSort{
    int* a;
    int n;
public:
    void SetParameters(int*, int);

    int getSize();
    int* getArr();

    void countSort();
};
#endif