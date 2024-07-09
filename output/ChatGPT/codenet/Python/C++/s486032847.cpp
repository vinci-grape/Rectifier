#include <iostream>
#include <cmath>
using namespace std;

int keta(string s) {
    if (s.length() < 2) {
        return stoi(s);
    }
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        n += (s[i] - '0');
    }
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

    return 0;
}