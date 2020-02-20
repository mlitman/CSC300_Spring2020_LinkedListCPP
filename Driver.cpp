#include "LinkedList.hpp"
#include <iostream>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr)); // use current time as seed for random generator
    LinkedList* ll = new LinkedList();

    for(int i = 0; i < 5; i++)
    {
        ll->addEnd(std::rand() % 1000);
    }
    //ll->display();
    ll->sort();
    std::cout << "*******************************************\n";
    ll->display(); //it should now be sorted
}