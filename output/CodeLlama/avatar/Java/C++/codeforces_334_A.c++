#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int square = n * n;
    vector<int> odd;
    vector<int> even;
    for (int i = 1; i <= square; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    int loop = square / n;
    int div = loop / 2;
    for (int i = 1; i <= loop; i++)
    {
        for (int j = 0; j < div; j++)
        {
            if (i % 2 == 1)
            {
                cout << odd[j] << " " << even[even.size() - 1 - j] << " ";
            }
            else
            {
                cout << even[j] << " " << odd[odd.size() - 1 - j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}