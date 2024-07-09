#include <bits/stdc++.h>
using namespace std;
int N;
int aaa(string n) {
    if (stoi(n) > N) return 0;
    int ans = 1;
    if (set<char>(n.begin(), n.end()) == set<char>({'7', '5', '3'})) ans = 1;
    else ans = 0;
    for (char i : {'7', '5', '3'}) {
        ans += aaa(n + i);
    }
    return ans;
}
int main() {
    cin >> N;
    cout << aaa("0");
}