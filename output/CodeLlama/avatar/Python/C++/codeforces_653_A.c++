#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l[n];
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    sort(l, l + n);
    for (int i = 0; i < n; i++)
    {
        if (l[i] + 1 in l and l[i] + 2 in l)
        {
            cout << "YES";
            break;
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}