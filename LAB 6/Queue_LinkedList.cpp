#include <iostream>
using namespace std;

class Node { // tells the computer node has two parts: data value and pointer to next node
public:
    string data; // The data we store (e.g., "Belle")
    Node* next; // pointer to the next node
    
    Node(string val) : data(val), next(nullptr) {}
    /* when we want to make a new node e.g.:
       Node* newNode = new Node("Belle")
       This line will automatically store "Belle" in data and 
       set next to nullptr which means it doesn't point to anything yet */
};

class Queue {
private:
    Node* front;
    Node* rear;
public: // constructor for initializing empty queue
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(string value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) { // queue empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << value << endl; // FIXED: << instead of <,
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue underflow" << endl;
            return;
        }
        
        Node* temp = front;
        cout << "Dequeued: " << temp->data << endl;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr; // FIXED: use = instead of ==
        }
        delete temp;
    }

    void display_queue() {
        if (front == nullptr) {
            cout << "Queue empty" << endl;
            return;
        }
        Node* current = front;
        cout << "Queue contains: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Queue q;
    
    q.enqueue("Belle");
    q.enqueue("Nabila");
    q.enqueue("Taskii");
    q.enqueue("Adam");
    
    q.dequeue();
    q.display_queue();
    
    return 0;
}







