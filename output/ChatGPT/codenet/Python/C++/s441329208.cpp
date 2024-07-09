#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s, t;
    cin >> s >> t;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());
    
    if (s < t) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}