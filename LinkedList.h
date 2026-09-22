#pragma once
#include "Node.h"
using namespace std;

template <typename T>

class LinkedList {
    Node<T> *head;
    Node<T> *tail;
    int size;

    LinkedList(T *value) {

        Node<T> *temp = new Node<T>(value);
        head = temp;

        size = 1;

    }

    LinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void print() {
        Node<T> *temp1 = head;
        while (head != nullptr) {

            temp1->print()<<" ";
            temp1 = temp1->next;
        }
    }

    void append(T *value) {

        Node<T> *newnode = new Node<T>(value);

        if (head == nullptr) {
            head = newnode;
            size++;
            return;

        }

        tail->next = newnode;
        tail = newnode;//tail=tail->next; also correct/ This is now O(1) time instead of going through entire list.


            size++;

        }

        //Add delete to end method before tuesday.


    

};
