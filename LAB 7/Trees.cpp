#include <iostream>
using namespace std;

class Node {
public:
    string name;
    Node* left;
    Node* right;

    Node(string n) {
        name = n;
        left = nullptr;
        right = nullptr;
    }
};

class Tree {
public:
    Node* root;

    // ? FIXED: Constructor name should be Tree
    Tree() {
        root = nullptr;
    }

    void add_root(string name) {
        root = new Node(name);
    }

    Node* find_node(Node* current, const string& name) {
        if (!current) return nullptr; 
        if (current->name == name) return current;

        Node* found = find_node(current->left, name);
        if (found) return found;

        return find_node(current->right, name);
    }

    void add_left(string parent_name, string child_name) {
        Node* parent = find_node(root, parent_name);
        if (parent && !parent->left)
            parent->left = new Node(child_name);
    }

    void add_right(string parent_name, string child_name) {
        Node* parent = find_node(root, parent_name);
        if (parent && !parent->right)
            parent->right = new Node(child_name);
    }

    void print_root() {
        if (root) {
            cout << "Root: " << root->name << endl;
        } else {
            cout << "Tree is empty." << endl;
        }
    }

    void print_left_of(const string& parent_name) {
        Node* parent = find_node(root, parent_name);
        if (parent && parent->left) {
            cout << "Left of " << parent->name << ": " << parent->left->name << endl;
        } else {
            cout << "No left child for " << parent_name << endl;
        }
    }

    void print_right_of(const string& parent_name) {
        Node* parent = find_node(root, parent_name);
        if (parent && parent->right) {
            cout << "Right of " << parent->name << ": " << parent->right->name << endl;
        } else {
            cout << "No right child for " << parent_name << endl;
        }
    }
};

int main() {
    Tree tree;

    tree.add_root("A");
    tree.add_left("A", "B");
    tree.add_right("A", "C");
    tree.add_left("B", "D");
    tree.add_right("B", "E");
    tree.add_left("C", "F");
    tree.add_right("C", "G");

    // Manual check using direct access
    cout << "Root: " << tree.root->name << endl;

    cout << "Left of A: " << tree.root->left->name << endl;
    cout << "Right of A: " << tree.root->right->name << endl;

    cout << "Left of B: " << tree.root->left->left->name << endl;
    cout << "Right of B: " << tree.root->left->right->name << endl;

    cout << "Left of C: " << tree.root->right->left->name << endl;
    cout << "Right of C: " << tree.root->right->right->name << endl;

    // ? You can also use the helper methods:
    tree.print_root();
    tree.print_left_of("A");
    tree.print_right_of("A");
    tree.print_left_of("B");
    tree.print_right_of("B");
    tree.print_left_of("C");
    tree.print_right_of("C");

    return 0;
}

