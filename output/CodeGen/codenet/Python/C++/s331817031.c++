#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int h,w;
vector<vector<string>> l;
int tmp;

void dfs(int i, int j) {
    if (i < 0 || i >= h || j < 0 || j >= w) return;
    if (l[i][j] == "#") return;
    if (j < tmp) return;
    tmp = j;
    dfs(i-1,j);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i,j+1);
}

int main() {
    cin >> h >> w;
    for (int i = 0; i < h; ++i) {
        l.push_back(vector<string>(w));
        for (int j = 0; j < w; ++j) {
            cin >> l[i][j];
        }
    }
    dfs(0,0);
    return 0;
}