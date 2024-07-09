#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string N;
    cin >> N;
    char tap[N.length()];
    for (int i = 0; i < N.length(); i++) {
        tap[i] = N[i];
    }
    bool isGood = true;
    for (int i = 0; i < N.length(); i++) {
        if ((i + 1) % 2 == 0) {
            if (!isMatch(EVE, tap[i])) {
                isGood = false;
                break;
            }
        } else {
            if (!isMatch(ODD, tap[i])) {
                isGood = false;
                break;
            }
        }
    }
    cout << (isGood? "Yes" : "No") << endl;
    return 0;
}

bool isMatch(const set<string> &set, char c) {
    return set.count(string(1, c)) > 0;
}