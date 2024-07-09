#include <iostream>
using namespace std;
int main()
{
    int N, P;
    cin >> N >> P;
    int combi(int N, int K)
    {
        int a = 1;
        for (int i = 0; i < K; i++)
        {
            a *= N - i;
        }
        for (int j = 0; j < K; j++)
        {
            a /= j + 1;
        }
        return a;
    }
    int ans = 0;
    int lis[N];
    int ls[N];
    for (int i = 0; i < N; i++)
    {
        cin >> lis[i];
        ls[i] = lis[i] % 2;
    }
    int one = 0, zero = 0;
    for (int i = 0; i < N; i++)
    {
        if (ls[i] == 1)
        {
            one++;
        }
        else
        {
            zero++;
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