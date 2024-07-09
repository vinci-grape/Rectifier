#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, P;
    cin >> N >> P;
    int lis[N];
    for (int i = 0; i < N; i++)
    {
        cin >> lis[i];
    }
    int ls[N];
    int one = 0, zero = 0;
    for (int i = 0; i < N; i++)
    {
        if (lis[i] % 2 == 0)
        {
            ls[i] = 0;
            zero++;
        }
        else
        {
            ls[i] = 1;
            one++;
        }
    }
    int pattern_a = 0, pattern_b = 0;
    for (int j = 0; j <= zero; j++)
    {
        pattern_b += combi(zero, j);
    }
    int time = 0;
    while (time <= one)
    {
        if (time % 2 == P)
        {
            pattern_a += combi(one, time);
        }
        time++;
    }
    cout << pattern_a * pattern_b;
    return 0;
}