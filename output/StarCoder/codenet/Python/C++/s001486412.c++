#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double below = 0;
    for(int i=0;i<n;i++)
    {
        below += 1.0/a[i];
    }
    cout<<1.0/below;
}