#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;

int main() {
    string N;
    cin >> N;
    vector<char> tap(N.begin(), N.end());

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

    cout << (isGood ? "Yes" : "No") << endl;
}



set<string> ODD = {"R", "U", "D"};
set<string> EVE = {"L", "U", "D"};

bool isMatch(set<string> set, char c) {
    return set.find(string(1, c)) != set.end();
}