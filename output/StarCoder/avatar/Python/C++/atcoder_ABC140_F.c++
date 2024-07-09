#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    int i = 0, j = 0;
    while (i < n)
    {
        j = i;
        while (j < n && v[j] == v[i])
            j++;
        if (j - i >= 3)
            return "Yes";
        i = j;
    }
    return "No";
}