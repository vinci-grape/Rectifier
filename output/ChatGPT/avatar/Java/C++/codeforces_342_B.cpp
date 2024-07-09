#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m, s, f;
    cin >> m >> s >> f;
    int maxT = -1;
    unordered_map<int, vector<int>> map;
    
    while (m > 0) {
        int k, a, b;
        cin >> k >> a >> b;
        map[k] = {a, b};
        maxT = max(maxT, k);
        m--;
    }
    
    string actions = "";
    const char M = (s < f) ? 'R' : 'L';
    int d = (s < f) ? 1 : -1;
    int cur = s;
    int a = -1;
    int b = -1;
    
    for (int t = 1; t <= maxT; t++) {
        if (map.count(t)) {
            a = map[t][0];
            b = map[t][1];
        }
        
        if (map.count(t) && ((cur >= a && cur <= b) || (cur + d >= a && cur + d <= b))) {
            actions += 'X';
        } else {
            actions += M;
            cur += d;
        }
        
        if (cur == f) {
            break;
        }
    }
    
    while (cur != f) {
        actions += M;
        cur += d;
    }
    
    cout << actions << endl;
    
    return 0;
}