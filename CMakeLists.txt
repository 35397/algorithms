cmake_minimum_required(VERSION 3.26)
project(algorithms)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithms main.cpp
        sorts/HeaderFiles/ShellSort.h
        sorts/ImplementationFiles/ShellSort.cpp

        sorts/HeaderFiles/SelectionSort.h
        sorts/ImplementationFiles/SelectionSort.cpp

        sorts/HeaderFiles/QuickSort.h
        sorts/ImplementationFiles/QuickSort.cpp

        sorts/HeaderFiles/InsertionSort.h
        sorts/ImplementationFiles/InsertionSort.cpp

        sorts/HeaderFiles/HeapSort.h
        sorts/ImplementationFiles/HeapSort.cpp

        sorts/HeaderFiles/DualPivotQuickSort.h
        sorts/ImplementationFiles/DualPivotQuickSort.cpp

        sorts/HeaderFiles/RadixSort.h
        sorts/ImplementationFiles/RadixSort.cpp

        sorts/HeaderFiles/DoubleSelectionSort.h
        sorts/ImplementationFiles/DoubleSelectionSort.cpp

        sorts/HeaderFiles/CountSort.h
        sorts/ImplementationFiles/CountSort.cpp

        sorts/HeaderFiles/BucketSort.h
        sorts/ImplementationFiles/BucketSort.cpp

        sorts/HeaderFiles/BubbleSort.h
        sorts/ImplementationFiles/BubbleSort.cpp

        sorts/HeaderFiles/FindMinMax.h
        sorts/ImplementationFiles/FindMinMax.cpp
)
