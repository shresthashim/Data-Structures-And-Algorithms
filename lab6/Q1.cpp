// Singly linked list 

// Time complexity: O(n)


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    Node* head;

public:
    SinglyLinkedList() { head = NULL; }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << value << " inserted into the list.\n";
    }

    void traverse() {
        if (head == NULL) {
            cout << "The list is empty.\n";
            return;
        }

        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);

    cout << "Traversing the list:\n";
    list.traverse();

    return 0;
}