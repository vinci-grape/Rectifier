#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    string arrs[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrs[i];
    }
    int length[n];
    int index = 0;
    int returnDex = 0;
    for (string tmp : arrs)
    {
        int dexG = tmp.find("G");
        int dexS = tmp.find("S");
        if (dexG > dexS)
        {
            returnDex = -1;
        }
        length[index++] = dexS - dexG;
    }
    set<int> set;
    for (int len : length)
    {
        set.insert(len);
    }
    if (returnDex == -1)
    {
        cout << returnDex << endl;
    }
    else
    {
        cout << set.size() << endl;
    }
}