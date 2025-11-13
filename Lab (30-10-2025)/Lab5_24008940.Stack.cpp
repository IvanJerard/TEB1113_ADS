#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next_ptr;
};

class Stack {
private:
    Node* top; // pointer to the top element

public:
    Stack() { top = nullptr; } // start with an empty stack

    void push(string value) {
        Node* newNode = new Node(); // create new node
        newNode->data = value;      // store value
        newNode->next_ptr = top;    // link new node to current top
        top = newNode;              // now this becomes the new top
        cout << value << " pushed to stack" << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty! Nothing to pop." << endl;
            return;
        }
        cout << top->data << " popped from stack" << endl;
        Node* temp = top;          // store current top
        top = top->next_ptr;       // move top to next node
        delete temp;               // delete old top
    }

    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element: " << top->data << endl;
        }
    }

    void display() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next_ptr;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push("test1");
    s.push("test2");
    s.push("test3");

    s.display();
    s.peek();
    s.pop();
    s.display();

    return 0;
}
