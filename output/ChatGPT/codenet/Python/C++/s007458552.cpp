#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string S;
    cin >> S;

    unordered_map<char, int> C;
    for (char c : S) {
        C[c]++;
    }

    cout << (C['R'] > n - C['R'] ? "Yes" : "No") << endl;

}