#include <iostream>

using namespace std;

class Node {
public:
    long value;
    Node* left;
    Node* right;

    Node() {
        value = 0;
        left = nullptr;
        right = nullptr;
    }

    void insert(long newValue) {
        if (newValue < this->value) {
            if (left == nullptr) {
                left = new Node();
                left->value = newValue;
            } else {
                left->insert(newValue);
            }
        } else {
            if (right == nullptr) {
                right = new Node();
                right->value = newValue;
            } else {
                right->insert(newValue);
            }
        }
    }

    void printInOrder() {
        if (left != nullptr) {
            left->printInOrder();
        }
        cout << " " << value;
        if (right != nullptr) {
            right->printInOrder();
        }
    }

    void printPreOrder() {
        cout << " " << value;
        if (left != nullptr) {
            left->printPreOrder();
        }
        if (right != nullptr) {
            right->printPreOrder();
        }
    }
};

int main() {
    int m;
    cin >> m;

    Node* tree = nullptr;
    for (int i = 0; i < m; i++) {
        string command;
        cin >> command;

        if (command == "insert") {
            long key;
            cin >> key;
            if (tree == nullptr) {
                tree = new Node();
                tree->value = key;
            } else {
                tree->insert(key);
            }
        } else {
            if (tree != nullptr) {
                tree->printInOrder();
                cout << endl;
                tree->printPreOrder();
                cout << endl;
            }
        }
    }

    return 0;
}