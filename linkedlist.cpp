#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head; // Head of the linked list

public:
    // Constructor to initialize the linked list
    LinkedList() : head(nullptr) {}

    // Insert function to add a new node at the beginning
    void insert(int value) {
        Node* newNode = new Node(value); // Create a new node
        newNode->next = head;             // Link the new node to the old head
        head = newNode;                   // Update head to the new node

        // Print the addresses
        cout << "New Node Address: "<<value<<"="<< newNode << endl; // Address of the new node
        cout << "Head Address: " << head << endl;        // Address of the head
    }

    // Display function to print the linked list
    void display() {
        Node* current = head; // Start from the head
        while (current != nullptr) {
            cout << current->data << " -> "; // Print the data
            current = current->next;         // Move to the next node
        }
        cout << "nullptr" << endl; // Indicate the end of the list
    }
};

int main() {
    LinkedList list; // Create a new linked list
    int n; // Variable to hold the number of elements

    cout << "the number you insert? ";
    cin >> n; // Read the number of elements from the user

    for (int i = 0; i < n; i++) {
        int value;
        cout << "plz make a input: ";
        cin >> value; // Read the value from the user
        list.insert(value); // Insert the value into the linked list
    }
    list.display(); // Display the linked list
    return 0;
}
