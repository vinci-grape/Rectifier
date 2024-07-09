#include <iostream>
#include <unordered_set>
using namespace std;

unordered_set<char> ODD = {'R', 'U', 'D'};
unordered_set<char> EVE = {'L', 'U', 'D'};

bool isMatch(unordered_set<char>& set, char c) {
    return set.count(c) > 0;
}

int main() {
    string N;
    cin >> N;

    bool isGood = true;
    for (int i = 0; i < N.length(); i++) {
        if ((i + 1) % 2 == 0) {
            if (!isMatch(EVE, N[i])) {
                isGood = false;
                break;
            }
        } else {
            if (!isMatch(ODD, N[i])) {
                isGood = false;
                break;
            }
        }
    }

    cout << (isGood ? "Yes" : "No") << endl;

    return 0;
}