#include "iostream"
#include "../HeaderFiles/CountSort.h"
#include "../HeaderFiles/FindMinMax.h"

void CountSort::SetParameters(int* a, int n){
    this->a = a;
    this->n = n;
}

int CountSort::getSize(){
    return n;
}
int* CountSort::getArr(){
    return a;
}

void CountSort::countSort(){
    FindMinMax m(getArr(), 0, getSize());
    double max = m.findMax();
    int min = m.findMin();
    int r = max - min + 1;

    int* freq = new int[r];
    int* out = new int[getSize()];

    for (int i = 0; i < r; ++i) {
        freq[i] = 0;
    }

    for (int i = 0; i < getSize(); ++i) {
        freq[getArr()[i]-min]++;
    }

    for (int i = 1; i < r; ++i) {
        freq[i] += freq[i-1];
    }

    for (int i = getSize()-1; i >= 0; --i) {
        out[freq[getArr()[i]]-1] = getArr()[i];
        freq[getArr()[i]-min]--;
    }

    for (int i = 0; i < getSize(); ++i) {
        getArr()[i] = out[i];
    }

    delete[] freq;
    delete[] out;
}
