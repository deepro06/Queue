  
#include <iostream>
#include "Queue.cpp"
using namespace std;

int main()
{
    Queue s1;

    s1.enqueue(50);
    s1.enqueue(100);
    s1.enqueue(23);
    s1.enqueue(-12);
    s1.display();
    s1.change(1, 99);
    s1.display();

    return 0;
}