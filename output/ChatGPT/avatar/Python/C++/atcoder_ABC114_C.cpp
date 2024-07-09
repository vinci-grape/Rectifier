#include <iostream>
#include <string>
#include <set>
using namespace std;

int N;

int aaa(string n) {
    if (stoi(n) > N) {
        return 0;
    }
    int ans = (set<char>(n.begin(), n.end()) == set<char>{'7', '5', '3'}) ? 1 : 0;
    for (char i : {'7', '5', '3'}) {
        ans += aaa(n + i);
    }
    return ans;
}

int main() {
    cin >> N;
    cout << aaa("0") << endl;
    return 0;
}