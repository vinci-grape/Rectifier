#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }
    
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    map<int, int> hp;
    for (int i = 0; i < n; i++) {
        hp[p[i]] = h[i];
    }
    
    map<int, vector<int>> path;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        path[a].push_back(b);
        path[b].push_back(a);
    }
    
    int c = 0;
    for (auto it = path.begin(); it != path.end(); ++it) {
        int i = it->first;
        vector<int> v = it->second;
        int f = 0;
        for (int j : v) {
            if (hp[i] <= hp[j]) {
                f = 1;
                break;
            }
        }
        if (f == 0) {
            c += 1;
        }
    }
    
    cout << c << endl;


    return 0;
}