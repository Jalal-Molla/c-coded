#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int n;

    cout << "Enter the number of values to insert: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value;
        list.insert(value);
    }

    cout << "The linked list is: ";
    list.display();

    return 0;
}
