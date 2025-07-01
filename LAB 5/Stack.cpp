#include <iostream>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node(string val) : data(val), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    void push(string value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << value << endl;
    }

    void display() {
        Node* current = top;
        if (current == nullptr) {
            cout << "Stack empty" << endl;
            return;
        }
        cout << "Stack contains: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Popped: " << temp->data << endl;
        delete temp;
    }

    string peek() {
        if (top == nullptr) {
            return "empty stack";
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;

    s.push("Noor");
    s.push("Hidayatul");
    s.push("Nabila");

    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.display();
    s.pop(); // should show underflow

    return 0;
}



