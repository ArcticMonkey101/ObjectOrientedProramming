#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
public:
    std::string data;
    Node* next;

    Node(const std::string& value);
};

#endif
