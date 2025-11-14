#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

// Function to create a new node dynamically
Node* createNode(const string& value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the end of a circular linked list
void insertEnd(Node*& head, const string& value) {
    Node* newNode = createNode(value);
    if (!head) {
        // Empty list, new node points to itself
        head = newNode;
        newNode->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// Function to traverse the list n times
void traverse(Node* head, int n) {
    if (!head) return;
    Node* current = head;
    for (int i = 0; i < n; i++) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert nodes dynamically
    insertEnd(head, "test1");
    insertEnd(head, "test2");
    insertEnd(head, "test3");

    int n;
    cout << "How many times do you wish to traverse: ";
    cin >> n;

    cout << "Traversal output: ";
    traverse(head, n);

    // Cleanup dynamically allocated nodes to prevent memory leaks
    if (head) {
        Node* temp = head->next;
        while (temp != head) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        delete head;
    }

    return 0;
}
