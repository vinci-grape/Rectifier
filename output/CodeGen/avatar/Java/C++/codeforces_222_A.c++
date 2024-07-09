#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n, k, l, c = 1;
    scanf("%d%d%d", &n, &k, &l);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == l) c++;
        else c = 1;
        l = a;
    }
    if (c + k > n) printf("%d", n - c);
    else printf("-1");
    return 0;
}