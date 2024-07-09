#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    vector<vector<int>> divs;
    for (int i = 1; i <= 100; i++) {
        vector<int> tmp(primes.size(), 0);
        for (int j = 0; j < primes.size(); j++) {
            int p = primes[j];
            while (i / p == i / (double)p) {
                i = i / p;
                tmp[j]++;
            }
        }
        divs.push_back(tmp);
    }

    vector<int> divsum(primes.size(), 0);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < primes.size(); j++) {
            divsum[j] += divs[i-1][j];
        }
    }

    int ans = 0;

    // >=74
    ans += count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 74; });

    // >=14 & 13~4
    ans += count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 14; }) * (count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 4; }) - 1);

    // >=24 & 23~2
    ans += count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 24; }) * (count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 2; }) - 1);

    // >=4,>=4 & >=2
    int count5 = count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 4; });
    int count3 = count_if(divsum.begin(), divsum.end(), [&](int x){ return x >= 2; });
    ans += count5 * (count5 - 1) * (count3 - 2) / 2;

    cout << ans << endl;

    return 0;
}