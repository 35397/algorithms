#include "iostream"
#include "../HeaderFiles/RadixSort.h"
#include "../HeaderFiles/FindMinMax.h"
using namespace std;


void RadixSort::SetParameters(int*a, int n){
    this->a = a;
    this->n = n;
}

void RadixSort::countSortForRadix(int* a, int p, int size){
    int* freq = new int[10];
    int* out = new int[size];

    for(int i = 0; i < 10; i++)
        freq[i] = 0;

    for (int i = 0; i < size; ++i) {
        freq[a[i]/p%10]++;
    }

    for (int i = 1; i < 10 ; ++i) {
        freq[i] += freq[i-1];
    }

    for (int i = size-1; i >= 0; i--) {
        out[freq[a[i]/p%10]-1] = a[i];
        freq[a[i]/p%10]--;
    }

    for (int i = 0; i < size; ++i) {
        a[i]=out[i];
    }

    delete[] freq;
    delete[] out;

}

void RadixSort::radixSort(){
    FindMinMax m(a,0,n);
    int max = a[m.findMax()];
    for (int i = 1; max/i > 0; i*=10) {
        countSortForRadix(a,i,n);
    }
}

