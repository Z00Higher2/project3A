// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Project 3A
// Hare.cpp file
#include <iostream>
#include <vector>
#include "Hare.hpp"
using namespace std;

Hare::Hare(){
    int arr[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        patterns.push_back(arr[i]);
    }
    position = 0;
}

Hare::Hare(std::vector<int> patterns, int position){
    this->patterns = patterns;
    this->position = position;
}

Hare::Hare(int* arr, int size, int position){
    //TODO
    this->position = position;
    for (int i = 0; i < size; i++) {
        this->patterns.push_back(arr[i]);
}}

void Hare::move(){
    int index = rand() % patterns.size();
    int stepsToMove = patterns[index];
    position += stepsToMove;
}

int Hare::getPosition() const{
    return position;
}

void Hare::setPosition(int position){
    this->position = position;
}