#include "iostream"
#include "vector"
#include "../HeaderFiles/BucketSort.h"
using namespace std;


void BucketSort::SetParameters(int* a, int bucketSize, int n){
    this->a = a;
    this->bucketSize = bucketSize;
    this->n = n;
}

int BucketSort::GetSize(){
    return n;
}


void BucketSort::insertion_sort_for_bucket(vector<int> &a, int n) {
    int i = 0, j = i;
    int key;

    for(int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void BucketSort::bucketSort(){
    if ( n == 0 || bucketSize <= 0){
        return;
    }

    int minVal = a[0];
    int maxVal = a[0];
    for (int i = 1; i < GetSize(); ++i) {
        if (a[i] < minVal){
            minVal = a[i];
        } else if (a[i] > maxVal){
                maxVal = a[i];
        }
    }

    int bucketCount = (maxVal - minVal) / bucketSize + 1;
    vector<vector<int>> buckets(bucketCount);
//  for (int i = 0; i < bucketCount; ++i) {
//  buckets.push_back(vector<int>());
//  }

    for (int i = 0; i < GetSize(); ++i) {
        int bucketIndex = (a[i] - minVal) / bucketSize;
        buckets[bucketIndex].push_back(a[i]);
    }

    int currentIndex = 0;
    for (int i = 0; i< buckets.size(); i++){
        insertion_sort_for_bucket(buckets[i],buckets[i].size());
        for (int j = 0; j < buckets[i].size(); ++j) {
            a[currentIndex++] = buckets[i][j];
        }
    }
}