#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t, m, i, j, pos, cnt;
    cin >> t >> m;
    int alocuente[m];
    for (i = 0; i < m; i++)
        alocuente[i] = 0;
    int ind = 1;
    for (i = 0; i < t; i++)
    {
        char op[10];
        int num;
        scanf("%s %d", op, &num);
        if (strcmp(op, "alloc") == 0)
        {
            pos = 0;
            for (j = 0; j < m; j++)
            {
                if (alocuente[j] == 0)
                {
                    pos++;
                    if (pos == num)
                    {
                        for (j = j - num + 1; j < j + 1; j++)
                            alocuente[j] = ind;
                        printf("%d\n", ind);
                        ind++;
                        break;
                    }
                }
                else
                    pos = 0;
            }
            if (pos!= 0)
                printf("NULL\n");
        }
        if (strcmp(op, "erase") == 0)
        {
            pos = 0;
            if (num > 0 && num!= 0 && alocuente[num - 1]!= num)
                printf("ILLEGAL_ERASE_ARGUMENT\n");
            else
            {
                for (j = 0; j < m; j++)
                {
                    if (alocuente[j] == num)
                    {
                        alocuente[j] = 0;
                        break;
                    }
                }
            }
        }
        if (strcmp(op, "defragment") == 0)
        {
            cnt = 0;
            for (j = 0; j < m; j++)
                if (alocuente[j] == 0)
                    cnt++;
            for (j = 0; j < cnt; j++)
                alocuente[j] = alocuente[j + cnt];
            for (j = cnt; j < m; j++)
                alocuente[j] = 0;
        }
    }
    return 0;
}