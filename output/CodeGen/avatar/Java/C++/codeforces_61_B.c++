#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    transform(word3.begin(), word3.end(), word3.begin(), ::tolower);
    string perm1 = word1 + word2 + word3;
    string perm2 = word1 + word3 + word2;
    string perm3 = word2 + word1 + word3;
    string perm4 = word2 + word3 + word1;
    string perm5 = word3 + word2 + word1;
    string perm6 = word3 + word1 + word2;
    int students;
    cin >> students;
    getline(cin, word1);
    for (int i = 0; i < students; i++) {
        string testCase;
        cin >> testCase;
        transform(testCase.begin(), testCase.end(), testCase.begin(), ::tolower);
        if (testCase == perm1 || testCase == perm2 || testCase == perm3 || testCase == perm4 || testCase == perm5 || testCase == perm6) {
            cout << "ACC";
        } else {
            cout << "WA";
        }
        cout << endl;
    }
    return 0;
}