#ifndef BUCKETSORT_H
#define BUCKETSORT_H

#include "vector"

class BucketSort{
    int* a;
    int bucketSize, n;
public:
    void SetParameters(int* a, int bucketSize, int n);
    int GetSize();

    void insertion_sort_for_bucket(std::vector<int>&, int);

    void bucketSort();
};

#endif