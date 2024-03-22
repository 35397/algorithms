#ifndef SHELLSORT_H
#define SHELLSORT_H

class ShellSort{
private:
    int *a;
    int n;
public:
    void SetParameters(int *a, int n);

    int* getArr();
    int getSize();

    void shell_sort();
};

#endif