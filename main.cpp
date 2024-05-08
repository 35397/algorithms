#include <iostream>
#include "sorts/HeaderFiles/FindMinMax.h"

#include "sorts/HeaderFiles/BubbleSort.h"
#include "sorts/HeaderFiles/BucketSort.h"
#include "sorts/HeaderFiles/DoubleSelectionSort.h"
#include "sorts/HeaderFiles/RadixSort.h"
#include "sorts/HeaderFiles/DualPivotQuickSort.h"
#include "sorts/HeaderFiles/HeapSort.h"
#include "sorts/HeaderFiles/CountSort.h"
#include "sorts/HeaderFiles/InsertionSort.h"
#include "sorts/HeaderFiles/QuickSort.h"
#include "sorts/HeaderFiles/SelectionSort.h"
#include "sorts/HeaderFiles/ShellSort.h"


using namespace std;

int main() {
////BubbleSort
//    BubbleSort bubble;
//    int bubbleArr[] = {5,4,2,6,8,9,3,14,5};
//    int bubbleSize = sizeof(bubbleArr)/ sizeof(bubbleArr[0]);
//    bubble.SetParameters(bubbleArr,bubbleSize);
//    bubble.bubble_sort();
//    cout << "\nbubble ";
//    for (int i = 0; i < bubbleSize; ++i) {
//        cout << bubbleArr[i] << " ";
//    }
//
////BucketSort
//    BucketSort bucket;
//    int bucketArr[] = {5,4,2,6,8,9,3,14,5};
//    int bucketArrSize = sizeof(bucketArr)/ sizeof(bucketArr[0]);
//    int bucketSize = 10;
//    bucket.SetParameters(bucketArr,bucketSize,bucketArrSize);
//    bucket.bucketSort();
//    cout << "\nbucket ";
//    for (int i = 0; i < bucketArrSize; ++i) {
//        cout << bucketArr[i] << " ";
//    }
//
////DoubleSelectionSort
//    DoubleSelectionSort doubleSelection;
//    int doubleSelectionArr[] = {5,4,2,6,8,9,3,14,5};
//    int doubleSelectionSize = sizeof(doubleSelectionArr)/ sizeof(doubleSelectionArr[0]);
//    doubleSelection.SetParameters(doubleSelectionArr, doubleSelectionSize);
//    doubleSelection.double_selection_sort();
//    cout << "\ndoubleSelection ";
//    for (int i = 0; i < doubleSelectionSize; ++i) {
//        cout << doubleSelectionArr[i] << " ";
//    }
//
////RadixSort
//    RadixSort radix;
//    int radixArr[] = {5,4,2,6,8,9,3,14,5};
//    int radixSize = sizeof(radixArr)/ sizeof(radixArr[0]);
//    radix.SetParameters(radixArr, radixSize);
//    radix.radixSort();
//    cout << "\nradix ";
//    for (int i = 0; i < radixSize; ++i) {
//        cout << radixArr[i] << " ";
//    }
//
////DualPivotQuickSort
//    DualPivotQuickSort dualPivot;
//    int dualPivotArr[] = {5,4,2,6,8,9,3,14,5};
//    int dualPivotSize = sizeof(dualPivotArr)/ sizeof(dualPivotArr[0]);
//    dualPivot.dualPivotQuickSort(dualPivotArr,0,dualPivotSize);
//    cout << "\ndualPivot ";
//    for (int i = 0; i < dualPivotSize; ++i) {
//        cout << dualPivotArr[i] << " ";
//    }
//
////HeapSort
//    HeapSort heap;
//    int heapArr[] = {5,4,2,6,8,9,3,14,5};
//    int heapSize = sizeof(heapArr)/ sizeof(heapArr[0]);
//    heap.heapSort(heapArr,heapSize);
//    cout << "\nheap ";
//    for (int i = 0; i < heapSize; ++i) {
//        cout << heapArr[i] << " ";
//    }
//
////CountSort
////Don't work
//    CountSort count;
//    int countArr[] = {5,4,2,6,8,9,3,14,5};
//    int countSize = sizeof(countArr)/ sizeof(countArr[0]);
//    count.SetParameters(countArr, countSize);
////    count.countSort();
//    cout << "\ncount ";
////    for (int i = 0; i < 9; ++i) {
////        cout << countArr[i] << " ";
////    }
//
////InsertionSort
//    InsertionSort insertion;
//    int insertionArr[] = {5,4,2,6,8,9,3,14,5};
//    int insertionSize = sizeof(insertionArr)/ sizeof(insertionArr[0]);
//    insertion.SetParameters(insertionArr,insertionSize);
//    insertion.insertion_sort();
//    cout << "\ninsertion ";
//    for (int i = 0; i < insertionSize; ++i) {
//        cout << insertionArr[i] << " ";
//    }
//
////QuickSort
//    QuickSort quick;
//    int quickArr[] = {5,4,2,6,8,9,3,14,5};
//    int quickSize = sizeof(quickArr)/ sizeof(quickArr[0]);
//    quick.quickSort(quickArr, 0, quickSize);
//    cout << "\nquick ";
//    for (int i = 1; i <= quickSize; ++i) {
//        cout << quickArr[i] << " ";
//    }
//
//SelectionSort
    SelectionSort selection;
    int selectionArr[] = {5,4,2,6,8,9,3,14,5};
    int selectionSize = sizeof(selectionArr)/ sizeof(selectionArr[0]);
    selection.SetParameters(selectionArr,selectionSize);
    selection.selection_sort();
    cout << "\nselection ";
    for (int i = 0; i < selectionSize; ++i) {
        cout << selectionArr[i] << " ";
    }

////ShellSort
//    ShellSort shell;
//    int shellArr[] = {5,4,2,6,8,9,3,14,5};
//    int shellSize = sizeof(shellArr)/ sizeof(shellArr[0]);
//    shell.SetParameters(shellArr,shellSize);
//    shell.shell_sort();
//    cout << "\nshell ";
//    for (int i = 0; i < shellSize; ++i) {
//        cout << shellArr[i] << " ";
//    }
//
////Testing min max
//    int sampleArr[] = {5,4,2,6,8,9,3,14,5};
//    int sampleSize = sizeof(sampleArr)/ sizeof(sampleArr[0]);
//    FindMinMax m(sampleArr, 0, sampleSize);
//    cout << "\n" << m.findMin() << " " << m.findMax();

    return 0;
}
