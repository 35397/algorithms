#ifndef FindMinMax_H
#define FindMinMax_H

class FindMinMax {
    int *a;
    int start, end;
public:
    FindMinMax(int *, int , int);

    int getStart();
    int getEnd();
    int* getArr();

    int findMin();

    int findMax();
};

#endif