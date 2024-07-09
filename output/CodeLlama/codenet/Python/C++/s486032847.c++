#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int keta(string s) {
    if (s.length() < 2) {
        return stoi(s);
    }
    int n = accumulate(s.begin(), s.end(), 0, [](int a, char b) {
        return a + b - '0';
    });
    return keta(to_string(n));
}

int main() {
    string N;
    cin >> N;
    // int N, X, T;
    // cin >> N >> X >> T;
    
    if (keta(N) % 9 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}