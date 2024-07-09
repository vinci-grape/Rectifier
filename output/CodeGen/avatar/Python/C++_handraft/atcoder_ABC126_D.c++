#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <utility>
#include <functional>
#include <numeric>
#include <limits>
#include <cfloat>
#include <cctype>
using namespace std;

const int N = 100005;

struct Node {
    int val;
    int color;
    vector<pair<Node*, int> > a;
    Node() {}
    Node(int _val, int _color, vector<pair<Node*, int> > _a) {
        val = _val;
        color = _color;
        a = _a;
    }
};

Node *nodes;
int n;
int u, v, w;

void dfs(Node *node, int distance) {
    if (node->color == 1) {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < node->a.size(); ++i) {
        Node *adjNode = node->a[i].first;
        int dis = node->a[i].second;
        if (distance + dis) % 2 == 0 {
            adjNode->color = 1;
            dfs(adjNode, distance + dis);
        }
    }
    node->color = 1;
}

int main() {
    n = 5;
    nodes = new Node[n];
    for (int i = 0; i < n; ++i) {
        nodes[i].val = i + 1;
        nodes[i].color = 0;
        nodes[i].a.clear();
    }
    nodes[0].a.push_back(make_pair(nodes[1], 1));
    nodes[0].a.push_back(make_pair(nodes[2], 2));
    nodes[1].a.push_back(make_pair(nodes[0], 1));
    nodes[1].a.push_back(make_pair(nodes[3], 3));
    nodes[2].a.push_back(make_pair(nodes[0], 1));
    nodes[2].a.push_back(make_pair(nodes[4], 4));
    nodes[3].a.push_back(make_pair(nodes[1], 1));
    nodes[3].a.push_back(make_pair(nodes[4], 4));
    nodes[4].a.push_back(make_pair(nodes[2], 1));
    nodes[4].a.push_back(make_pair(nodes[3], 1));
    dfs(nodes[0], 0);
    return 0;
}