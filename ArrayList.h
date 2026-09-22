#pragma once
#include <iostream>
using namespace std;

template<typename T>

class ArrayList {


public:
    ArrayList():size(0) {


    }
    void addFront(T item) {
        if (size>=CAPACITY) {

            cout<<"Array Overflow"<<endl;
            return;
        }
        for (int i = size; i > 0; i--) {

            data[i] = data [i] -1;
        }
        data[0] = item;
        size++;
        //This is O(n)

    }
    void deleteFront() {

        if (size==0) {
            cout<<"Array empty"<<endl;
        return;
        }
        for (int i = 0; i < size-1; i++) {
            data[i] = data[i+1];
        }
        size--;
        //This is O(n)
    }

    bool search(T item) {
        if (size==0) {
            cout<<"Array empty"<<endl;
            return false;
        }
    for (int i = 0; i < size; i++) {
        if (data[i] == item) {
            return true;
        } //This is O(n)
    }

    return false;
    }

    void printArray() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << ", ";

        }
        cout << endl;
    }



    void deleteBack() {

        if (size==0) {
            cout<<"Array empty"<<endl;
            return;
        }
        size--; //This is O(1)
    }
    void addBack(T item) {
        if (size==CAPACITY) {
            cout<<"Array Overflow"<<endl;
            return;
        }
        data[size] = item;
        size++; //This is O(1)
    }


    
private:

    static const int CAPACITY = 20;
    T data[CAPACITY];
    int size;




};


