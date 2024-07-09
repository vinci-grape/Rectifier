#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int n, m, gcd;
string s, t;

int main() {
    cin >> n >> m >> gcd;
    cin >> s >> t;
    vector<int> ans;
    for (int i = 0; i < gcd; i++) {
        if (s[i * n / gcd]!= t[i * m / gcd]) {
            ans.push_back(-1);
        } else {
            ans.push_back(i);
        }
    }
    cout << *max_element(ans.begin(), ans.end()) << endl;
    return 0;
}