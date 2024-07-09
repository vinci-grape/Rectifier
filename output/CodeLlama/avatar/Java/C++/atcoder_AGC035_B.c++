#include <bits/stdc++.h>
using namespace std;
int main() {
    int numNode, numEdge;
    cin >> numNode >> numEdge;
    vector<int> connect[numNode];
    for (int i = 0; i < numNode; i++) {
        connect[i] = vector<int>();
    }
    for (int i = 0; i < numEdge; i++) {
        int a, b;
        cin >> a >> b;
        connect[a - 1].push_back(b - 1);
        connect[b - 1].push_back(a - 1);
    }
    if (numEdge % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }
    int visited[numNode];
    bool odd[numNode];
    stringstream print;
    dfs(0, -1);
    cout << print.str() << endl;
    return 0;
}
void dfs(int crt, int parent) {
    visited[crt] = 1;
    vector<int> crtConnect = connect[crt];
    for (int child : crtConnect) {
        if (child == parent || visited[child] == 1) {
            continue;
        } else if (visited[child] == 2) {
            print << (crt + 1) << " " << (child + 1) << endl;
            odd[crt] = !odd[crt];
        } else {
            dfs(child, crt);
            if (odd[child]) {
                print << (child + 1) << " " << (crt + 1) << endl;
                odd[child] = !odd[child];
            } else {
                print << (crt + 1) << " " << (child + 1) << endl;
                odd[crt] = !odd[crt];
            }
        }
    }
    visited[crt] = 2;
}