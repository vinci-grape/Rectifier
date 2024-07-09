#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0, flag = 0, isTrue = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!= i + 1 &&!flag)
        {
            l = i + 1;
            flag = 1;
            continue;
        }
        if (a[i]!= i + 1 && flag)
        {
            r = i + 1;
            if ((a[r - 1] - a[r - 2]) > 0)
            {
                isTrue = 1;
                break;
            }
        }
    }
    if (!isTrue)
    {
        cout << l << " " << r;
    }
    else
    {
        cout << "0" << " " << "0";
    }
    return 0;
}