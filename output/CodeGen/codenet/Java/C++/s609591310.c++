#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>
using namespace std;

typedef long long int64;

const int maxn = 100000;

int n;
int list[maxn];
int numlist1[maxn];
int numlist2[maxn];

int main()
{
    int i, j;
    while(scanf("%d", &n)!= EOF)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &list[i]);
        }
        for(i = 0; i < n; i+=2)
        {
            numlist1[list[i]-1] += 1;
            numlist2[list[i+1]-1] += 1;
        }
        int max11=0, max12=0, max21=0, max22=0;
        int val1=0, val2=0;
        for(i = 0; i < maxn; i++)
        {
            if(numlist1[i] >= max11)
            {
                max12 = max11;
                max11 = numlist1[i];
                val1 = i;
            }
            else if(numlist1[i] >= max12)
            {
                max12 = numlist1[i];
            }
            if(numlist2[i] >= max21)
            {
                max22 = max21;
                max21 = numlist2[i];
                val2 = i;
            }
            else if(numlist2[i] >= max22)
            {
                max22 = numlist2[i];
            }
        }
        if(val1!= val2)
        {
            printf("%d\n", n - max11 - max21);
        }
        else
        {
            printf("%d\n", n - max12 - max22);
        }
    }
    return 0;
}