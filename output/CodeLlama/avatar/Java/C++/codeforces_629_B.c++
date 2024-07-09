#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int n, a, b, i, j, answer = 0;
    int FfriendPerDay[367] = {0};
    int MfriendPerDay[367] = {0};
    char c;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%c %d %d", &c, &a, &b);
        for (j = a; j <= b; j++)
        {
            if (c == 'M')
                MfriendPerDay[j]++;
            else
                FfriendPerDay[j]++;
            if (MfriendPerDay[j] < FfriendPerDay[j])
            {
                if (MfriendPerDay[j] > answer)
                    answer = MfriendPerDay[j];
            }
            else
            {
                if (FfriendPerDay[j] > answer)
                    answer = FfriendPerDay[j];
            }
        }
    }
    printf("%d", answer * 2);
    return 0;
}