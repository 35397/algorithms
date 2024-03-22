#include "../HeaderFiles/FindMinMax.h"


FindMinMax::FindMinMax(int *a, int start, int end){
    this->a = a;
    this->start = start;
    this->end = end;
}

int FindMinMax::getStart(){
    return start;
}
int FindMinMax::getEnd(){
    return end;
}
int* FindMinMax::getArr(){
    return a;
}

int FindMinMax::findMin() {
    int min_ind = getStart();
    for (int i = getStart() + 1; i < getEnd(); i++) {
        if (getArr()[min_ind] > getArr()[i]) {
            min_ind = i;
        }
    }
    return min_ind;
}

int FindMinMax::findMax() {
    int max_ind = getStart();
    for (int i = getStart() + 1; i < getEnd(); i++) {
        if (getArr()[max_ind] < getArr()[i]) {
            max_ind = i;
        }
    }
    return max_ind;
}
