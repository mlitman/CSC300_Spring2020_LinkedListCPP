#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

class LinkedList 
{
private:
    Node* head;
    int count;
    
public:
    LinkedList();
    void addFront(int payload);
    void display();
    
};
#endif /* LinkedList_hpp */