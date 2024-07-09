#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    int max = 10*A+B+C;
    max = max > 10*B+C+A? max : 10*B+C+A;
    max = max > 10*C+A+B? max : 10*C+A+B;
    printf("%d",max);
    return 0;
}