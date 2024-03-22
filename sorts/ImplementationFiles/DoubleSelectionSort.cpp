#include "iostream"
#include "../HeaderFiles/DoubleSelectionSort.h"
#include "../HeaderFiles/FindMinMax.h"
using namespace std;


void DoubleSelectionSort::SetParameters(int *a, int n){
    this->a = a;
    this->n = n;
}

int* DoubleSelectionSort::getArr(){
    return a;
}
int DoubleSelectionSort::getSize(){
    return n;
}


void DoubleSelectionSort::double_selection_sort() {
    int minind = 0, maxind = 0;
    for(int i = 0; i < getSize()/2; i++) {
        FindMinMax min(getArr(),i,getSize()-i);
        minind = min.findMin();
        swap(getArr()[i], getArr()[minind]);

        FindMinMax max(getArr(),i,getSize()-i);
        maxind = max.findMax();
        swap(getArr()[getSize()-1-i], getArr()[maxind]);
    }
}

