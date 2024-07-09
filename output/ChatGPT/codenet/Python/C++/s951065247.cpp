#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, A, B, C;
vector<int> l;

int dfs(int cur, int a, int b, int c) {
    if (cur == N) {
        return abs(A - a) + abs(B - b) + abs(C - c) - 30;
    }
    int no_add = dfs(cur + 1, a, b, c);
    int add_a = dfs(cur + 1, a + l[cur], b, c) + 10;
    int add_b = dfs(cur + 1, a, b + l[cur], c) + 10;
    int add_c = dfs(cur + 1, a, b, c + l[cur]) + 10;

    return min(no_add, min(add_a, min(add_b, add_c)));
}

int main() {
    cin >> N >> A >> B >> C;
    l.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    cout << dfs(0, 0, 0, 0) << endl;

    return 0;
}