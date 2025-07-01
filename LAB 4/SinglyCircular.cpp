/*
ID = 22011843
Name = Noor Hidayatul Nabila binti Kamarudin
*/
#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* next;
    Node(string name) : name(name), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head = nullptr;
    Node* tails = nullptr;

public:
    void addNode(string name) {
        Node* newNode = new Node(name);
        if (head == nullptr) {
            head = newNode;
            tails = newNode;
            newNode->next = head; // point to self (first node)
        } else {
            tails->next = newNode; // link old tail to new node
            tails = newNode;       // update tail
            tails->next = head;    // maintain circular link
        }
    }

    void display() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }
        Node* current = head;
        do {
            cout << current->name << " -> ";
            current = current->next;
        } while (current != head);
        cout << "(back to " << head->name << ")" << endl;
    }
};

int main() {
    CircularLinkedList cll;

    // Add your names
    cll.addNode("Noor");
    cll.addNode("Hidayatul");
    cll.addNode("Nabila");

    cll.display();

    return 0;
}


