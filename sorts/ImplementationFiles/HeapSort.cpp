#include "../HeaderFiles/HeapSort.h"

void HeapSort::swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void HeapSort::heapify(int a[], int n, int i){
    int largest = i;
    int left = i*2 +1;
    int right = i*2 +2;

    if (left < n && a[largest]<a[left]){
        largest = left;
    }
    if (right < n && a[largest] < a[right]){
        largest = right;
    }
    if (largest!=i){
        swap(a,i,largest);
        heapify(a,n,largest);
    }
}

void HeapSort::heapSort(int a[], int n){
    for (int i = n-1; i >=0 ; i--) {
        heapify(a,n,i);
    }
    for (int i = n-1; i >= 0; i--) {
        swap(a,0,i);
        heapify(a,i,0);
    }
}

