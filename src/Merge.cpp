//
// Created by cchiper on 4/22/22.
//

#include "Merge.h"

#include <utility>

Merge::Merge(std::vector<int> arr): arr(std::move(arr)){}

void Merge::Sort() {
    MergeSort(0, this->arr.size());
}

void Merge::MergeSort(int p1, int p2) {
    if(p1+1 == p2) return;

    int half = (p2-p1)/2;

    MergeSort(p1, p1+half);
    MergeSort(p1+half, p2);

    MergeArrays(p1, p2, half);
}

void Merge::MergeArrays(int p1, int p2, int half) {
    std::vector<int> result;
    int pointer1 = p1;
    int pointer2 = p1+half;

    while(pointer1 < p1+half && pointer2 < p2){
        if(this->arr[pointer1] < this->arr[pointer2]){
            result.push_back(this->arr[pointer1]);
            pointer1++;
        }else{
            result.push_back(this->arr[pointer2]);
            pointer2++;
        }
    }
    while(pointer1 < p1+half){
        result.push_back(this->arr[pointer1]);
        pointer1++;
    }
    while(pointer2 < p2){
        result.push_back(this->arr[pointer2]);
        pointer2++;
    }

    for(int i=0; i<result.size(); i++){
        this->arr[p1+i] = result[i];
    }
}

void Merge::printArr() {
    for(int i: this->arr){
        std::cout << i << " ";
    }
};

