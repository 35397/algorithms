#include "../HeaderFiles/QuickSort.h"

#include "iostream"
using namespace std;
int QuickSort::partition(int *a, int start, int end) {
    int pivot = a[end], i = start - 1;

    for (int j = start; j < end; j++) {
        if (a[j] < pivot)
            swap(a[++i], a[j]);
    }

    swap(a[++i], a[end]);
    return i;
}

void QuickSort::quickSort(int *a, int start, int end) {
    if (start < end) {
        int p = partition(a, start, end);
        quickSort(a, start, p - 1);
        quickSort(a, p + 1, end);
    }
}