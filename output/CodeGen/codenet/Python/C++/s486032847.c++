#include <iostream>
#include <cstdlib>
using namespace std;

int keta(string s) {
    if (s.size() < 2) return atoi(s.c_str());
    int n = 0;
    for (int i = 0; i < s.size(); i++) {
        n += atoi(s.substr(i, i+1).c_str());
    }
    return keta(to_string(n));
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << (keta(to_string(N)) % 9 == 0? "Yes" : "No") << endl;
    }
    return 0;
}