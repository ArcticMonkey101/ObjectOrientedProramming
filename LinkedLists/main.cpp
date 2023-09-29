#include "list.h"
#include <iostream>

int main() {
    List originalList;
    originalList.push_back("Apple");
    originalList.push_back("Banana");
    originalList.push_back("Cherry");

    std::cout << "Original List: ";
    originalList.display();

    // Create a copy of the list using copy constructor
    List copyList = originalList;

    std::cout << "Copied List: ";
    copyList.display();

    // Modify the original list
    originalList.push_back("Date");

    std::cout << "Original List after modification: ";
    originalList.display();

    std::cout << "Copied List after modification of original: ";
    copyList.display();

    // Create a new list using assignment operator
    List assignedList;
    assignedList = originalList;

    std::cout << "Original List after assignment: ";
    originalList.display();
    std::cout << "Assigned List: ";
    assignedList.display();

    return 0;
}
