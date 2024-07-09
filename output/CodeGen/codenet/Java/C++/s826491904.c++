#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int N;
    int max, min;
    scanf("%d", &N);
    scanf("%d", &max);
    for (int i = 1; i < N; i++) {
        int in;
        scanf("%d", &in);
        max = max > in? max : in;
        min = min < in? min : in;
    }
    printf("%d", max - min);
    return 0;
}