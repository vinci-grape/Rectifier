#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int p = 0, m = 0;
    int x = 0, y = n-1;
    int lastx = 0, lasty = n-1;
    while(x <= y)
    {
        if(arr[x] > 0)
        {
            p++;
            lastx = x;
            x++;
        }
        else if(arr[x] < 0)
        {
            m++;
            lasty = y;
            y--;
        }
        else
        {
            x++;
            y--;
        }
    }
    int ans = 1000000000;
    for(int i=0; i<=k; i++)
    {
        if(i > lastx || k-i > lasty)
            continue;
        if(i == 0)
            p = 0;
        else
            p = arr[i-1];
        if(k-i == 0)
            m = 0;
        else
            m = arr[lasty-(k-i)];
        ans = min(ans, 2*p+abs(m), p+2*abs(m));
    }
    cout << ans << endl;
    return 0;
}