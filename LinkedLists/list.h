#ifndef LIST_H
#define LIST_H

#include <string>

class Node;

class List {
private:
    Node* head;

public:
    List();
    List(const List& other);
    List& operator=(const List& other);
    ~List();

    void push_back(const std::string& value);
    void clear();
    void display();
};

#endif
