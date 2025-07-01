/*
ID = 22011843
Name = Noor Hidayatul Nabila binti Kamarudin
*/
#include <iostream>
#include <string>
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
    Node* tail = nullptr;

public:
    void addNode(string name) {
        Node* newNode = new Node(name);
        if (!head) {
            head = newNode;
            tail = newNode;
            tail->next = head; // circular link to itself
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head; // keep circle intact
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

    void deleteByValue(string val) {
        if (!head) return; // empty list

        Node* current = head;
        Node* prev = tail; // start with tail as previous to head

        do {
            if (current->name == val) {
                if (current == head) {
                    // deleting head
                    if (head == tail) {
                        // only one node in list
                        delete head;
                        head = nullptr;
                        tail = nullptr;
                        return;
                    }
                    head = head->next;
                    tail->next = head; // update tail's next to new head
                    delete current;
                    return;
                } else {
                    // deleting middle or tail
                    prev->next = current->next;
                    if (current == tail) {
                        tail = prev; // update tail if needed
                    }
                    delete current;
                    return;
                }
            }
            prev = current;
            current = current->next;
        } while (current != head);
    }

    // Destructor to clean up memory
    ~CircularLinkedList() {
        if (!head) return;
        Node* current = head;
        do {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        } while (current != head);
        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    CircularLinkedList cll;

    // Add your names
    cll.addNode("Noor");
    cll.addNode("Hidayatul");
    cll.addNode("Nabila");

    cout << "Original list: ";
    cll.display();

    // Delete one name to demonstrate safe deletion
    cll.deleteByValue("Hidayatul");

    cout << "After deleting Hidayatul: ";
    cll.display();

    return 0;
}

