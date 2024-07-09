#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    vector<vector<int>> divs(101, vector<int>(primes.size()));
    for (int i = 1; i <= 100; ++i) {
        for (int j = 0; j < primes.size(); ++j) {
            int p = primes[j];
            divs[i][j] = 0;
            while (i / p == i / p) {
                i /= p;
                ++divs[i][j];
            }
        }
    }
    vector<int> divsum(primes.size());
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < primes.size(); ++j) {
            divsum[j] += divs[i][j];
        }
    }
    int ans = 0;
    // >=74
    ans += count_if(divsum.begin(), divsum.end(), [](int x){return x >= 74;});
    // >=14 & 13~4
    ans += count_if(divsum.begin(), divsum.end(), [](int x){return x >= 14;}) * (count_if(divsum.begin(), divsum.end(), [](int x){return x >= 5;}) - 1);
    // >=24 & 23~2
    ans += count_if(divsum.begin(), divsum.end(), [](int x){return x >= 24;}) * (count_if(divsum.begin(), divsum.end(), [](int x){return x >= 3;}) - 1);
    // >=4,>=4 & >=2
    ans += count_if(divsum.begin(), divsum.end(), [](int x){return x >= 5;}) * (count_if(divsum.begin(), divsum.end(), [](int x){return x >= 5;}) - 1) * (count_if(divsum.begin(), divsum.end(), [](int x){return x >= 3;}) - 2) / 2;
    cout << ans << endl;
    return 0;
}