#include "iostream"
#include "../HeaderFiles/BubbleSort.h"
using namespace std;



void BubbleSort::SetParameters(int *a, int n){
    this->a = a;
    this->n = n;
}

int* BubbleSort::getArr(){
    return a;
}
int BubbleSort::getSize(){
    return n;
}

void BubbleSort::bubble_sort() {
    bool isSwapped;
    for(int i = 0; i < getSize() - 1; i++) {
        isSwapped = false;
        for(int j = 0; j < getSize() - i - 1; j++) {
            if(getArr()[j] > getArr()[j+1]) {
                swap(getArr()[j], getArr()[j + 1]);
                isSwapped = true;
            }
        }
        if(!isSwapped)
            break;
    }
}
