#include <iostream>
using namespace std;

struct Node {
    long value;
    Node* left;
    Node* right;
};

void insert(Node*& root, long newValue) {
    if (root == nullptr) {
        root = new Node();
        root->value = newValue;
    } else if (newValue < root->value) {
        insert(root->left, newValue);
    } else {
        insert(root->right, newValue);
    }
}

void printInOrder(Node* root) {
    if (root != nullptr) {
        printInOrder(root->left);
        cout << " " << root->value;
        printInOrder(root->right);
    }
}

void printPreOrder(Node* root) {
    if (root != nullptr) {
        cout << " " << root->value;
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

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
            insert(tree, key);
        } else {
            if (tree != nullptr) {
                printInOrder(tree);
                cout << endl;
                printPreOrder(tree);
                cout << endl;
            }
        }
    }

    return 0;
}