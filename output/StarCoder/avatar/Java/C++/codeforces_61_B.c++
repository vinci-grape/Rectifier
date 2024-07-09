#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word1, word2, word3, testCase, perm1, perm2, perm3, perm4, perm5, perm6;
    int students;
    cin >> word1 >> word2 >> word3;
    cin >> students;
    cin.ignore();
    for (int i = 0; i < students; i++)
    {
        getline(cin, testCase);
        perm1 = word1 + word2 + word3;
        perm2 = word1 + word3 + word2;
        perm3 = word2 + word1 + word3;
        perm4 = word2 + word3 + word1;
        perm5 = word3 + word2 + word1;
        perm6 = word3 + word1 + word2;
        if (testCase == perm1 || testCase == perm2 || testCase == perm3 || testCase == perm4 || testCase == perm5 || testCase == perm6)
        {
            cout << "ACC" << endl;
        }
        else
        {
            cout << "WA" << endl;
        }
    }
    return 0;
}