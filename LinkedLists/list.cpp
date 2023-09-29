#include "list.h"
#include "node.h"
#include <iostream>

// Constructor
List::List() : head(nullptr) {}

// Copy Constructor
List::List(const List& other) : head(nullptr) {
    Node* current = other.head;
    while (current != nullptr) {
        push_back(current->data);
        current = current->next;
    }
}

// Overload Assignment Operator
List& List::operator=(const List& other) {
    if (this == &other) {
        return *this; // Self-assignment, no need to copy
    }

    // Clear the current list
    clear();

    // Copy elements from the other list
    Node* current = other.head;
    while (current != nullptr) {
        push_back(current->data);
        current = current->next;
    }

    return *this;
}

// Destructor
List::~List() {
    clear();
}

// Add a new element to the end of the list
void List::push_back(const std::string& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Clear the list and free memory
void List::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Display the list
void List::display() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
