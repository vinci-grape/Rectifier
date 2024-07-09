#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);
    primes.push_back(13);
    primes.push_back(17);
    primes.push_back(19);
    primes.push_back(23);
    primes.push_back(29);
    primes.push_back(31);
    primes.push_back(37);
    primes.push_back(41);
    primes.push_back(43);
    primes.push_back(47);
    vector<int> divs(n+1, 0);
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < primes.size(); j++) {
            int p = primes[j];
            while (i % p == 0) {
                i = i / p;
                tmp++;
            }
        }
        divs[i] = tmp;
    }
    int dsum = 0;
    for (int i = 1; i < n+1; i++) {
        dsum += divs[i];
    }
    int ans = dsum;
    for (int i = 1; i < n+1; i++) {
        for (int j = 0; j < primes.size(); j++) {
            int p = primes[j];
            if (i % p == 0) {
                ans += divs[i] * (dsum - divs[i]);
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}