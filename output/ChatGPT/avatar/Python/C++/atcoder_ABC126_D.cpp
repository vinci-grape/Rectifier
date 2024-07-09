#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Node {
public:
    int val;
    bool color;
    vector<pair<Node*, int>> a;
    Node() {
        val = 0;
        color = false;
    }
};

void traverse(Node* node, int distance, set<Node*>& nodeSet) {
    if (nodeSet.find(node) != nodeSet.end()) {
        return;
    }
    else {
        nodeSet.insert(node);
    }
    for (pair<Node*, int>& pair : node->a) {
        Node* adjNode = pair.first;
        int dis = pair.second;
        if ((distance + dis) % 2 == 0) {
            adjNode->color = node->color;
        }
        else {
            adjNode->color = !node->color;
        }
        traverse(adjNode, distance + dis, nodeSet);
    }
}

int main() {
    int n;
    cin >> n;
    vector<Node*> nodes(n);
    for (int i = 0; i < n; i++) {
        nodes[i] = new Node();
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        Node* node1 = nodes[u - 1];
        Node* node2 = nodes[v - 1];
        node1->val = u;
        node2->val = v;
        node1->a.push_back({node2, w});
        node2->a.push_back({node1, w});
    }
    Node* root = nodes[0];
    root->color = true;
    set<Node*> nodeSet;
    traverse(root, 0, nodeSet);
    for (int i = 0; i < n; i++) {
        Node* node = nodes[i];
        if (node->color) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }

    return 0;
}