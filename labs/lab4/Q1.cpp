// Enqueue and Dequeue operations in a Queue using an array

// Time Complexity: O(n)

#include <iostream>
using namespace std;

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((rear + 1) % MAX == front) {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % MAX;
    queue[rear] = val;
}

int dequeue() {
    if (front == -1) {
        cout << "Queue Underflow!" << endl;
        return -1;
    }
    int val = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
    return val;
}

int peek() {
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return -1;
    }
    return queue[front];
}

bool isEmpty() {
    return front == -1;
}

int main() {
    enqueue(1);
    enqueue(2);

    cout << "Front element: " << peek() << endl;

    cout << "Dequeued: " << dequeue() << endl;

    enqueue(3);

    cout << "Dequeued: " << dequeue() << endl;

    cout << "Front element: " << peek() << endl;

    while (!isEmpty()) {
        cout << "Dequeued: " << dequeue() << endl;
    }

    return 0;
}
