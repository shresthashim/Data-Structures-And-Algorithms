// Stack Push and Pop

// Time Complexity: O(1)

#include <iostream>
using namespace std;

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top >= MAX - 1)
    {
        cout << "Stack Overflow\n";
        return;
    }
    top++;
    stack[top] = value;
    cout << value << " pushed to stack\n";
}

int pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int poppedValue = stack[top];
    top--;
    cout << poppedValue << " popped from stack\n";
    return poppedValue;
}

int peek()
{
    if (top < 0)
    {
        cout << "Stack is empty\n";
        return -1;
    }
    return stack[top];
}

bool isEmpty()
{
    return top < 0;
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << "Top element is: " << peek() << "\n";

    pop();
    pop();

    return 0;
}
