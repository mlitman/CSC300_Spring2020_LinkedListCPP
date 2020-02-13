#include "LinkedList.hpp"
#include <iostream>

int main()
{
    LinkedList* ll = new LinkedList(); //some change
    ll->addFront(1);
    ll->addFront(2);
    ll->addEnd(3);
    //std::cout << ll->removeFront() << "\n";
    ll->display();
    int a = ll->removeEnd();
    std::cout << a << "\n";
    ll->display();
    delete ll;
}