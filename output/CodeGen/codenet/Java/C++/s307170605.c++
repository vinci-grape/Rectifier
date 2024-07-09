#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int i = 0;
    while (scanf("%d", &i)!= EOF) {
        if (i == 0) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}