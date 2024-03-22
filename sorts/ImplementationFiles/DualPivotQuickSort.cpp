#include "iostream"
#include "../HeaderFiles/DualPivotQuickSort.h"
using namespace std;

void DualPivotQuickSort::dualPivotQuickSort(int *a, int start, int end) {
    if (start < end) {
        int leftPivot = a[start];
        int rightPivot = a[end];
        if (leftPivot > rightPivot) {
            swap(a[start], a[end]);
            leftPivot = a[start];
            rightPivot = a[end];
        }

        int i = start + 1;
        int lt = start + 1;
        int gt = end - 1;

        while (i <= gt) {
            if (a[i] < leftPivot) {
                swap(a[i], a[lt]);
                lt++;
                i++;
            } else if (a[i] > rightPivot) {
                swap(a[i], a[gt]);
                gt--;
            } else {
                i++;
            }
        }

        swap(a[start], a[lt - 1]);
        swap(a[end], a[gt + 1]);

        dualPivotQuickSort(a, start, lt - 2);
        if (leftPivot != rightPivot) {
            dualPivotQuickSort(a, lt, gt);
        }
        dualPivotQuickSort(a, gt + 2, end);
    }
}
