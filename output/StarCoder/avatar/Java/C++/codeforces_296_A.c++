#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int array[1001];
    for (int i = 0; i < n; i++)
    {
        int index;
        cin >> index;
        array[index]++;
    }
    int countMax = -1;
    for (int i = 1; i < 1001; i++)
    {
        if (countMax < array[i])
        {
            countMax = array[i];
        }
    }
    if (n % 2 == 0)
    {
        if (countMax <= n / 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        if (countMax <= n / 2 + 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    return 0;
}