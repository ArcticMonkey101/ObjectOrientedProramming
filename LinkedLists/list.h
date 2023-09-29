#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
private:
    Node* head;

public:
    List();
    List(const List& other);
    List& operator=(const List& other);
    ~List();

    void push_back(int value);
    void clear();
    void display();
};

#endif
