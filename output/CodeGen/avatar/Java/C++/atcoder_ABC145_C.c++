#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int **pos = new int*[N];
    for (int i = 0; i < N; i++) {
        pos[i] = new int[2];
        scanf("%d%d", &pos[i][0], &pos[i][1]);
    }
    double sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            sum += sqrt((pos[i][0] - pos[j][0]) * (pos[i][0] - pos[j][0]) + (pos[i][1] - pos[j][1]) * (pos[i][1] - pos[j][1]));
        }
    }
    printf("%.10f", sum / N);
    return 0;
}