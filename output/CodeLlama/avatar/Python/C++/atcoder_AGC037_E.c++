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
        cout << min(S) * N;
        return 0;
    }
    string get_last_dict(string s_str)
    {
        string U = s_str + s_str.substr(0, s_str.length() - 1);
        char c = min(s_str);
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
            p += 1;
        }
        return U.substr(minindex, N);
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
    S = get_last_dict(S);
    if (K == 1)
    {
        cout << S;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == S[0])
            {
                count += 1;
            }
            else
            {
                break;
            }
        }
        if (count * (pow(2, K - 1)) >= N)
        {
            cout << S[0] * N;
        }
        else
        {
            S = S[0] * (count * ((pow(2, K - 1)) - 1)) + S;
            cout << S.substr(0, N);
        }
    }
    return 0;
}