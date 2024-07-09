#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d=0;
    for (int i = 0; i < n; i++) {
        d+=cin.get()%2;
    }
    cout<<(d%2==0?"YES":"NO");
}