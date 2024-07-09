#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int divs[101][12];
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<12;j++)
        {
            divs[i][j] = 0;
        }
    }
    for(int i=1;i<101;i++)
    {
        for(int j=0;j<12;j++)
        {
            int p = primes[j];
            while(i%p==0)
            {
                i = i/p;
                divs[i-1][j]++;
            }
        }
    }
    int divsum[12];
    for(int i=0;i<12;i++)
    {
        divsum[i] = 0;
    }
    for(int i=1;i<N+1;i++)
    {
        for(int j=0;j<12;j++)
        {
            divsum[j] += divs[i-1][j];
        }
    }
    int num(int n)
    {
        int cnt = 0;
        for(int i=0;i<12;i++)
        {
            if(divsum[i]>=n-1)
            {
                cnt++;
            }
        }
        return cnt;
    }
    int ans = 0;
    ans += num(75);
    ans += num(15)*(num(5)-1);
    ans += num(25)*(num(3)-1);
    ans += num(5) * (num(5)-1) * (num(3)-2) / 2;
    cout << ans << endl;
    return 0;
}