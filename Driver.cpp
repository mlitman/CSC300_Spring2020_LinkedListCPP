#include "LinkedList.hpp"
#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    
    int random_variable = std::rand();
    LinkedList* ll = new LinkedList(); //some change
    ll->addFront(1);
    ll->addFront(2);
    ll->addEnd(3);
    ll->addAtIndex(1, 7);
    //std::cout << ll->removeFront() << "\n";
    
    int val = ll->removeIndex(2);
    std::cout<< std::time(nullptr) << "\n";
    ll->display();
    delete ll;
}