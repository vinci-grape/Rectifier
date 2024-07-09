#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n, d=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        d += (d%2==0)?0:1;
    }
    printf("%d", d%2==0?"YES":"NO");
    return 0;
}