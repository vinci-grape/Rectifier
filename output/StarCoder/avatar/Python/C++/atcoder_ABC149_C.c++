#include <bits/stdc++.h>
using namespace std;
int main( )
{
    int X;
    cin >> X;
    bool prime[100010];
    memset(prime, true, sizeof(prime));
    prime[0] = false;
    prime[1] = false;
    for(int i = 4; i < 100010; i += 2)
        prime[i] = false;
    for(int i = 3; i * i < 100008; i += 2)
    {
        if(prime[i])
        {
            for(int j = i * i; j < 100008; j += i)
                prime[j] = false;
        }
    }
    for(int i = X; i < 100008; i++)
    {
        if(prime[i])
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}