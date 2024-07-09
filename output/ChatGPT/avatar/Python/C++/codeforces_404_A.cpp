#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        s.push_back(k);
    }
    int flag = 0;
    vector<char> d1;
    vector<char> d2;
    set<char> rem;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                d1.push_back(s[i][j]);
            }
            if (i == n - j - 1) {
                d2.push_back(s[i][j]);
            }
            if (i != j && i != n - j - 1) {
                rem.insert(s[i][j]);
            }
        }
    }
    if (rem.size() != 1) {
        cout << "NO" << endl;
    }
    else if (d1 != d2) {
        cout << "NO" << endl;
    }
    else if (d1.size() != 1) {
        cout << "NO" << endl;
    }
    else if (d1[0] == *rem.begin()) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    
    
    return 0;
}