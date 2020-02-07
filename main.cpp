#include "LinkedList.hpp"

int main()
{
    LinkedList* ll = new LinkedList();
    ll->addFront(1);
    ll->addFront(2);
    ll->display();
    delete ll;
}