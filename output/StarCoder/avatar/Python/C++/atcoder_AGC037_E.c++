#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    bool aaaa = false;
    if (K >= 15)
    {
        aaaa = true;
    }
    else if (pow(2, K) >= N)
    {
        aaaa = true;
    }
    if (aaaa)
    {
        cout << min(S) * N << endl;
        return 0;
    }
    string U = S + S;
    int c = min(S);
    int p = U.find(c);
    int minindex = p;
    p += 1;
    while (p <= N)
    {
        if (U[p] == c)
        {
            if (check_normal_dict(U, minindex, p))
            {
                minindex = p;
            }
        }
        p++;
    }
    S = U.substr(minindex, N);
    if (K == 1)
    {
        cout << S << endl;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == S[0])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (count * pow(2, K - 1) >= N)
        {
            cout << S[0] * N << endl;
        }
        else
        {
            S = S[0] * (count * (pow(2, K - 1) - 1)) + S;
            cout << S.substr(0, N) << endl;
        }
    }
    return 0;
}
bool check_normal_dict(string u, int pointer1, int pointer2)
{
    for (int i = 0; i < N; i++)
    {
        if (u[pointer1 + i] > u[pointer2 + i])
        {
            return true;
        }
        else if (u[pointer1 + i] < u[pointer2 + i])
        {
            return false;
        }
    }
    return false;
}