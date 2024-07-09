#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]%min!=0)
        {
            cout << -1;
            return 0;
        }
    }
    cout << min;
    return 0;
}