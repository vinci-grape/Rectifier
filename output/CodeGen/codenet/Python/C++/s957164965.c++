#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cassert>
using namespace std;

int main() {
    int X, N;
    int p[102];
    cin >> X >> N;
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    sort(p, p + N);
    map<int, vector<int> > candidates;
    for (int i = -1; i <= 100; i++) {
        if (i == 0) continue;
        if (i in p) continue;
        if (abs(X - i) in candidates.keys()) {
            candidates[abs(X - i)].push_back(i);
        } else {
            candidates[abs(X - i)] = {i};
        }
    }
    int smallest = min(candidates.keys());
    int minNum = min(candidates[smallest]);
    cout << minNum << endl;
    return 0;
}