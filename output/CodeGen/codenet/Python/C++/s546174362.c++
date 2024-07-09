#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int N,M;
    int *A;
    scanf("%d %d",&N,&M);
    A = (int *)malloc(N*sizeof(int));
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    A = (int *)realloc(A,(N+1)*sizeof(int));
    A[N]=0;
    while(M) {
        A[N]/=2;
        M--;
        int i=-2;
        while(M and (A[i]>=A[N])) {
            A[i]/=2;
            M--;
            i--;
        }
        A = (int *)realloc(A,(N+1)*sizeof(int));
        A[N]=0;
        A.sort();
    }
    printf("%d",A[N]);
    return 0;
}