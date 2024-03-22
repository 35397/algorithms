#include "iostream"
#include "../HeaderFiles/FindMinMax.h"
#include "../HeaderFiles/SelectionSort.h"
using namespace std;

void SelectionSort::SetParameters(int *a, int n){
    this->a = a;
    this->n = n;
}

int* SelectionSort::getArr(){
    return a;
}
int SelectionSort::getSize(){
    return n;
}

void SelectionSort::selection_sort() {
    for(int i = 0; i < getSize() - 1; i++) {
        FindMinMax min(getArr(),i,getSize());
        swap(getArr()[i], getArr()[min.findMin()]);
    }
}