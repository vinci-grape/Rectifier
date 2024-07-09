#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> s;
    vector<string> l(n);
    for (int i = 0; i < n; i++)
        cin >> l[i];
    string f = "Yes";
    for (int i = 0; i < n; i++)
    {
        s[l[i]]++;
        if (s[l[i]] >= 2)
            f = "No";
        if (i != 0 && l[i - 1][l[i - 1].length() - 1] != l[i][0])
            f = "No";
    }
    cout << f;
    return 0;
}