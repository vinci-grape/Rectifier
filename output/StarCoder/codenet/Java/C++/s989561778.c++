#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, digit;
    while (scanf("%d %d", &a, &b) == 2) {
        digit = (int) log10(a+b) + 1;
        printf("%d\n", digit);
    }
    return 0;
}