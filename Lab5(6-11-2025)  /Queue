#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void enqueue(string value) {
        Node* newNode = new Node{value, nullptr};

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " added to queue" << endl;
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << front->data << " removed from queue" << endl;
        Node* temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }

    void peek() {
        if (front == nullptr)
            cout << "Queue is empty!" << endl;
        else
            cout << "Front element: " << front->data << endl;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue (front to rear): ";
        for (Node* temp = front; temp != nullptr; temp = temp->next)
            cout << temp->data << " ";
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue("test1");
    q.enqueue("test2");
    q.enqueue("test3");

    q.display();
    q.peek();
    q.dequeue();
    q.display();

    return 0;
}
