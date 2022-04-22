//
// Created by cchiper on 4/22/22.
//
#include <iostream>
#include <vector>

//using namespace std;

#ifndef MERGE_MERGE_H
#define MERGE_MERGE_H


class Merge {
    public:
    Merge(std::vector<int> arr);
    void Sort();
    void printArr();


    private:
    std::vector<int> arr;
    void MergeSort(int p1, int p2);
    void MergeArrays(int p1, int p2, int half);
};


#endif //MERGE_MERGE_H
