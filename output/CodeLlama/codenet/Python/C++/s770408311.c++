#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> res;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        res.push_back(a);
    }
    cout << set<string>(res.begin(), res.end()).size() << endl;
    return 0;
}