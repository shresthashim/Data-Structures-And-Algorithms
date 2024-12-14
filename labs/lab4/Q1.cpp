// Enqueue and Dequeue operations in a Queue using an array

// Time Complexity: O(n)

#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

char queue[MAX];

int front = -1, rear = -1;

void enqueue(char ch)
{
    if (rear >= MAX - 1)
    {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    queue[++rear] = ch;
}

char dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow!" << endl;
        return '\0';
    }
    return queue[front++];
}

char peek()
{
    if (front == -1 || front > rear)
    {
        return '\0';
    }
    return queue[front];
}

bool isEmpty()
{
    return front == -1 || front > rear;
}

int main()
{

    enqueue('A');
    enqueue('B');
    enqueue('C');

    cout << "Front element is: " << peek() << endl;

    cout << "Removed element: " << dequeue() << endl;
    cout << "Removed element: " << dequeue() << endl;

    enqueue('D');

    cout << "Front element is: " << peek() << endl;

    while (!isEmpty())
    {
        cout << "Removed element: " << dequeue() << endl;
    }

    return 0;
}
