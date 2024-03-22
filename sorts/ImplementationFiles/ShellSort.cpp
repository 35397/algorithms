#include "../HeaderFiles/ShellSort.h"

void ShellSort::SetParameters(int *a, int n){
    this->a = a;
    this->n = n;
}

int* ShellSort::getArr(){
    return a;
}
int ShellSort::getSize(){
    return n;
}

void ShellSort::shell_sort(){
    for (int gap = getSize()/2; gap > 0 ; gap/= 2) {
        for (int i = gap; i < getSize(); ++i) {
            int temp = getArr()[i];
            int j;
            for (j = i; j>= gap && getArr()[j-gap] > temp ; j-=gap) {
                getArr()[j] = getArr()[j-gap];
            }
            getArr()[j] = temp;
        }
    }
}

