/*
ID = 22011843
Name = Noor Hidayatul Nabila binti Kamarudin
*/
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string name;
    Node *next_ptr;

    Node(string name, Node *next_ptr = nullptr)
    { // Constructor with default nullptr
        this->name = name;
        this->next_ptr = next_ptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    LinkedList(Node *head = nullptr)
    { // Constructor takes Node* and initializes tail
        this->head = head;
        this->tail = head;
        if (head)
            head->next_ptr = nullptr;
    }

    void add_element(Node *node)
    {
        if (!node)
            return; // Check for null pointer

        node->next_ptr = nullptr; // New node points to nothing

        if (!head)
        { // List empty
            head = node;
            tail = node;
        }
        else
        {
            tail->next_ptr = node; // Link current tail to new node
            tail = node;           // Update tail to new node
        }
    }

    void display_list()
    {
        Node *current = head;
        if (!current)
        {
            cout << "List is empty" << endl;
            return;
        }
        while (current != nullptr)
        {
            cout << current->name << " -> ";
            current = current->next_ptr;
        }
        cout << "nullptr" << endl;
    }

    void delete_by_value(string val)
    {
        if (!head)
            return; // Empty list

        // deleting head
        if (head->name == val)
        {
            Node *temp = head;
            head = head->next_ptr;
            delete temp;
            if (!head)
                tail = nullptr; // Update tail if list becomes empty
            return;
        }

        Node *current = head;
        while (current->next_ptr && current->next_ptr->name != val)
        {
            current = current->next_ptr;
        }

        if (current->next_ptr)
        { // Found node to delete
            Node *temp = current->next_ptr;
            current->next_ptr = temp->next_ptr;
            if (temp == tail)
                tail = current; // Update tail if deleting last node
            delete temp;
        }
    }

    Node *get_head() const
    {
        return head;
    }
};

int main()
{
    // Create nodes
    Node *node1 = new Node("Noor");
    Node *node2 = new Node("Hidayatul");
    Node *node3 = new Node("Nabila");

    // Create linked list and add nodes
    LinkedList linkedlst(node1);
    linkedlst.add_element(node2);
    linkedlst.add_element(node3);

    // Display the list 
    cout << "Original list: ";
    linkedlst.display_list();

    // Delete "Hidayatul"
    linkedlst.delete_by_value("Hidayatul");
    cout << "After deleting Hidayatul: ";
    linkedlst.display_list();

    // Clean up memory
    Node *current = linkedlst.get_head();
    while (current)
    {
        Node *temp = current;
        current = current->next_ptr;
        delete temp;
    }

    return 0;
}








