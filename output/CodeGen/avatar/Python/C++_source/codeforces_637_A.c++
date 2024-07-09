#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main ( ) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> w(s.size());
    for (int i = 0; i < s.size(); ++i) {
        w[i] = s[i] - 'a' + 1;
    }
    int c = -1, a = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (w[i] == max(w.begin(), w.end())) {
            if (s[i] > c) {
                a = i;
                c = s[i];
            }
        }
    }
    cout << a << endl;
    return 0;
}