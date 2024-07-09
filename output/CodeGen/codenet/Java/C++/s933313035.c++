#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Node {
    long value;
    Node *left;
    Node *right;
public:
    Node() {
        left = NULL;
        right = NULL;
    }
    void insert(long newValue) {
        if (newValue < value) {
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
    Node root;
    for (int i = 0; i < m; i++) {
        string command;
        cin >> command;
        if (command.compare("insert") == 0) {
            long key;
            cin >> key;
            root.insert(key);
        } else {
            root.printInOrder();
            cout << endl;
            root.printPreOrder();
            cout << endl;
        }
    }
    return 0;
}