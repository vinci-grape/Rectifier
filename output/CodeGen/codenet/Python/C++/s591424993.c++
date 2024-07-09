#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
using namespace std;

int d, g;
vector<vector<int> > pc;

int ans = 0;

int bit = 0;

int count = 0;
int sum = 0;

int nokori[d];

for (int i = 0; i < d; i++) {
    nokori[i] = i + 1;
}

for (int i = 0; i < d; i++) {
    if (bit & (1 << i)) {
        sum += pc[i][0] * (i + 1) * 100 + pc[i][1];
        count += pc[i][0];
        nokori[i] = 0;
    }
}

if (sum < g) {
    int use = *max_element(nokori, nokori + d);
    int n = min(pc[use - 1][0], -(-(g - sum) / (use * 100)));
    count += n;
    sum += n * use * 100;
}

if (sum >= g) {
    ans = min(ans, count);
}

cout << ans << endl;