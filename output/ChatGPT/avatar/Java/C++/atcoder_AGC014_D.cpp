#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> g;
int maxMatching(int v, int p) {
    int a = 0;
    int o = 0;
    for (int w : g[v]) {
        if (w == p) continue;
        int r = maxMatching(w, v);
        a += r / 2;
        o += r % 2;
    }
    return 2 * a + min(1, o) + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    int m = maxMatching(0, -1) / 2;
    cout << (2 * m == n ? "Second" : "First") << endl;
    
    return 0;
}