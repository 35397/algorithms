#include "../HeaderFiles/InsertionSort.h"

void InsertionSort::SetParameters(int *a, int n){
    this->a = a;
    this->n = n;
}

int* InsertionSort::getArr(){
    return a;
}
int InsertionSort::getSize(){
    return n;
}


void InsertionSort::insertion_sort(){
    int j;
    int key;
    for (int k = 1; k < getSize(); ++k) {
        key = getArr()[k];
        j = k-1;
        while (j>=0 && getArr()[j]>key){
            getArr()[j+1] = getArr()[j];
            j--;
        }
        getArr()[j+1] = key;
    }
}

