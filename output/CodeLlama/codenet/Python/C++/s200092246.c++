#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans[2];
    for (int i = 1; i <= n; i++)
    {
        if (sum(1, i) < n)
            continue;
        else
        {
            ans[0] = i - 1;
            ans[1] = sum(1, i) - n;
            break;
        }
    }
    for (int i = 1; i <= ans[0]; i++)
    {
        if (i + 1 != ans[1])
            cout << i << endl;
    }
    return 0;
}