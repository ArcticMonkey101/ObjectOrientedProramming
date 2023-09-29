#include "list.h"
#include <iostream>

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
