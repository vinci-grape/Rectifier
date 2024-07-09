#include <bits/stdc++.h>
using namespace std;
long min;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long arr[4];
    min = LONG_MAX;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    string ops[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ops[i];
    }
    util(arr, ops, 0);
    cout << min << endl;
    return 0;
}
void util(long arr[], string ops[], int idx)
{
    if (idx == 3)
    {
        min = min(min, arr[0]);
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            long a[3];
            int k = 0;
            for (int l = 0; l < 4; l++)
            {
                if (l != j && l != i)
                {
                    a[k++] = arr[l];
                }
            }
            long res;
            if (idx < 3 && ops[idx] == "+")
            {
                res = arr[i] + arr[j];
            }
            else
            {
                res = arr[i] * arr[j];
            }
            a[k] = res;
            util(a, ops, idx + 1);
        }
    }
}