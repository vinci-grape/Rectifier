#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;
    string perm1 = word1 + word2 + word3;
    string perm2 = word1 + word3 + word2;
    string perm3 = word2 + word1 + word3;
    string perm4 = word2 + word3 + word1;
    string perm5 = word3 + word2 + word1;
    string perm6 = word3 + word1 + word2;
    int students;
    cin >> students;
    cin.ignore();
    for (int i = 0; i < students; i++)
    {
        string testCase;
        getline(cin, testCase);
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