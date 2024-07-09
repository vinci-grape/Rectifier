#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    set<int> bannedRows, bannedCols;
    for (int i = 0; i < m; i++) {
        int r, c;
        cin >> r >> c;
        if (r > 1 && r < n) bannedRows.insert(r);
        if (c > 1 && c < n) bannedCols.insert(c);
    }

    int answer = (n - 2) * 2;
    answer -= bannedRows.size();
    answer -= bannedCols.size();

    if (n % 2 != 0) {
        int mid = (n + 1) / 2;
        if (!bannedRows.count(mid) && !bannedCols.count(mid)) {
            answer--;
        }
    }

    cout << answer << endl;

    return 0;
}