#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int n;
int color[MAX];
class Node {
public:
    int val;
    bool color;
    vector<pair<Node *, int>> a;
};
Node *nodes[MAX];
void traverse(Node *node, int distance) {
    if (node->color)
        return;
    node->color = true;
    for (auto pair : node->a) {
        Node *adjNode = pair.first;
        int dis = pair.second;
        if ((distance + dis) % 2 == 0)
            adjNode->color = node->color;
        else
            adjNode->color =!node->color;
        traverse(adjNode, distance + dis);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        nodes[i] = new Node();
        nodes[i]->val = i + 1;
        nodes[i]->color = false;
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        Node *node1 = nodes[u - 1];
        Node *node2 = nodes[v - 1];
        node1->a.push_back({node2, w});
        node2->a.push_back({node1, w});
    }
    Node *root = nodes[0];
    root->color = true;
    set<Node *> nodeSet;
    traverse(root, 0);
    for (int i = 0; i < n; i++) {
        Node *node = nodes[i];
        if (node->color)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}