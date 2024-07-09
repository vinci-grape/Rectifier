#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        m[val]++;
    }
    int max = INT_MIN;
    for (auto it = m.begin(); it!= m.end(); it++)
    {
        max = max > it->second? max : it->second;
    }
    cout << max << m.size() << endl;
    return 0;
}