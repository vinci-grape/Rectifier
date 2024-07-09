#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    long value;
    Node *left;
    Node *right;

    Node() {
        value = 0;
        left = NULL;
        right = NULL;
    }

    void insert(long newValue) {
        if (newValue < this->value) {
            if (left == NULL) {
                left = new Node();
                left->value = newValue;
            } else {
                left->insert(newValue);
            }
        } else {
            if (right == NULL) {
                right = new Node();
                right->value = newValue;
            } else {
                right->insert(newValue);
            }
        }
    }

    void printInOrder() {
        if (left!= NULL) {
            left->printInOrder();
        }
        cout << " " << value;
        if (right!= NULL) {
            right->printInOrder();
        }
    }

    void printPreOrder() {
        cout << " " << value;
        if (left!= NULL) {
            left->printPreOrder();
        }
        if (right!= NULL) {
            right->printPreOrder();
        }
    }
};

int main() {
    int m;
    cin >> m;

    Node *tree = NULL;
    for (int i = 0; i < m; i++) {
        string command;
        cin >> command;

        if (command.compare("insert") == 0) {
            long key;
            cin >> key;
            if (tree == NULL) {
                tree = new Node();
                tree->value = key;
            } else {
                tree->insert(key);
            }
        } else {
            if (tree!= NULL) {
                tree->printInOrder();
                cout << endl;
                tree->printPreOrder();
                cout << endl;
            }
        }
    }

    return 0;
}