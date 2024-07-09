#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

class atcoder_ABC127_B {
public:
    int r, d, x;
    int main() {
        int n;
        scanf("%d", &n);
        r = 1;
        d = 1;
        x = 1;
        for (int i = 0; i < 10; ++i) {
            x = r * x - d;
            cout << x << endl;
        }
        return 0;
    }
};