#include <bits/stdc++.h>
using namespace std;
int main()
{
    int D;
    long G;
    cin >> D >> G;
    int p[D], c[D];
    for (int i = 0; i < D; i++)
    {
        cin >> p[i] >> c[i];
    }
    int min = 100000;
    for (int bit = 0; bit < (1 << D); bit++)
    {
        int score = 0;
        int solve_num = 0;
        for (int i = 0; i < D; i++)
        {
            if ((bit & (1 << i))!= 0)
            {
                score += 100 * (i + 1) * p[i] + c[i];
                solve_num += p[i];
            }
        }
        if (score < G)
        {
            for (int i = D - 1; i >= 0; i--)
            {
                if ((bit & (1 << i)) == 0)
                {
                    for (int j = 0; j < p[i] - 1; j++)
                    {
                        score += 100 * (i + 1);
                        solve_num++;
                        if (score >= G)
                        {
                            break;
                        }
                    }
                }
            }
        }
        if (score >= G)
        {
            min = min < solve_num? min : solve_num;
        }
    }
    cout << min << endl;
    return 0;
}