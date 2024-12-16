// Add a node in Linked List

#include <iostream>

using namespace std;

struct Node
{
    char data;
    Node *next;
};

Node *front = NULL, *rear = NULL;

void enqueue(char ch)
{
    Node *newNode = new Node;
    newNode->data = ch;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

char dequeue()
{
    if (front == NULL)
    {
        cout << "Queue Underflow!" << endl;
        return '\0';
    }

    Node *temp = front;
    front = front->next;

    if (front == NULL)
    {
        rear = NULL;
    }

    char ch = temp->data;
    delete temp;
    return ch;
}

char peek()
{
    if (front == NULL)
    {
        return '\0';
    }
    return front->data;
}

bool isEmpty()
{
    return front == NULL;
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