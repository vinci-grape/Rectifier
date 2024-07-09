#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    bool bool = x == 1? true : false;
    int result =!bool? 1 : 0;
    printf("%d", result);
    return 0;
}