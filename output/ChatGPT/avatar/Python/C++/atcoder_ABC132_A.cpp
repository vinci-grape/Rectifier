#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    string S;
    cin >> S;

    unordered_map<char, int> counter;
    for (char ch : S) {
        counter[ch]++;
    }

    unordered_set<char> uniqueChars;
    for (char ch : S) {
        uniqueChars.insert(ch);
    }

    if (uniqueChars.size() != 2) {
        cout << "No" << endl;
        return 0;
    }

    for (char ch : uniqueChars) {
        if (counter[ch] != 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}