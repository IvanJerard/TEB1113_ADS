#include <iostream>
using namespace std;

// Singly Linked List
struct Node {
    string data;
    Node* ptr;  // pointer to the next node
};

int main() {
    // Create nodes
    Node node1, node2, node3, node4;

    // Assign data and link nodes
    node1.data = "test1";
    node1.ptr = &node2;

    node2.data = "test2";
    node2.ptr = &node3;

    node3.data = "test3";
    node3.ptr = &node4;

    node4.data = "test4";
    node4.ptr = nullptr; // last node points to nullptr

    // Traverse the list and print data
    cout << "Output:" << endl;
    Node* current = &node1;
    while (current != nullptr) {
        cout << current->data << "\n";
        current = current->ptr;
    }

    return 0;
}
