#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    int h1, m1, h2, m2, k, t1, t2;
    scanf("%d %d %d %d %d %d", &h1, &m1, &h2, &m2, &k, &t1, &t2);
    cout << t2 - t1 - k << endl;
    return 0;
}