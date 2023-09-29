#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class List {
private:
    Node* head;

public:
    // Constructor
    List() : head(nullptr) {}

    // Copy Constructor
    List(const List& other) : head(nullptr) {
        Node* current = other.head;
        while (current != nullptr) {
            push_back(current->data);
            current = current->next;
        }
    }

    // Overload Assignment Operator
    List& operator=(const List& other) {
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
    ~List() {
        clear();
    }

    // Add a new element to the end of the list
    void push_back(int value) {
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
    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Display the list
    void display() {
        Node* current = head;
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    List originalList;
    originalList.push_back(1);
    originalList.push_back(1);
    originalList.push_back(2);
    originalList.push_back(3);
    originalList.push_back(5);

    std::cout << "Original List: ";
    originalList.display();

    // Create a copy of the list
    List copyList = originalList;

    std::cout << "Copied List: ";
    copyList.display();

    // Modify the original list
    originalList.push_back(8);

    std::cout << "Original List after modification: ";
    originalList.display();

    std::cout << "Copied List after modification of original: ";
    copyList.display();

    List assignedList;
    assignedList = originalList;

    std::cout << "Original List after assignment: ";
    originalList.display();
    std::cout << "Assigned List: ";
    assignedList.display();

    return 0;
}