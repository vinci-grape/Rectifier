#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    deque<string> a;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        a.push_back(s);
    }
    deque<string> b;
    for(int i=1;i<n;i+=2)
    {
        b.push_front(a[i]);
    }
    for(int i=0;i<n;i+=2)
    {
        b.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}