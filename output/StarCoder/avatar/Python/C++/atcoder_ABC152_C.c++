#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int n[N];
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
    }
    int a = 1;
    int pos = 0;
    for (int i = 1; i < N; i++)
    {
        if (n[pos] > n[i])
        {
            a++;
            pos = i;
        }
    }
    cout << a;
    return 0;
}