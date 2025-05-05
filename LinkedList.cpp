#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() : head(nullptr){}

LinkedList::LinkedList(int* array, int len) : head(nullptr) {
    for(int i=0; i<len; i++) {
        insertPosition(i+1, array[i]);
    }

}

LinkedList::~LinkedList(){
    Node* current = head;

    while(current != nullptr) {
        Node* del = current;
        current = current->link;
        delete del; 
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);

    if(pos<2 || head==nullptr) {
        newNode->link = head;
        head = newNode;
        
        return;
    }

    Node* current = head;
    for(int i=1; i< (current->link != nullptr) && (pos-1); i++) {
        current = current->link;
    }

    newNode->link = current->link;
    current->link = newNode;
}

bool LinkedList::deletePosition(int pos) {
    if(pos<1 || head==nullptr){
        return false;
    }

    if(pos==1){
        Node* del = head;
        head = head->link;
        delete del;

        return true;
    }

    Node* current=head;
    for(int i=1; (current->link != nullptr) && (pos-1); i++) {
        current = current->link;
    }

    if(current->link == nullptr) {
        return false;
    }

    Node* del = current->link;
    current->link = del->link;
    delete del;

    return true;

}

int LinkedList::get(int pos) {
    if(pos<1) {
        return std::numeric_limits<int>::max();
    }

    Node* current = head; 
    for(int i=1; (current->link != nullptr) && (pos-1); i++) {
        current = current->link;
    }

    if(current == nullptr) {
        return std::numeric_limits<int>::max();
    }

    return current->data;
}

int LinkedList::search(int target) {
    Node* current = head;
    int pos=1;

    while(current != nullptr) {
        if(current->data == target) {
            return pos;
        }
        current=current->link;
        pos++;
    }

    return -1;
}

void LinkedList::printList() {
    Node* current = head;
    std::cout << "[";

    while(current!=nullptr) {
        std::cout << current->data;
        current=current->link;

        if(current != nullptr) {
            std::cout << " ";
        }
    }
    std::cout << "]" << std::endl;
}