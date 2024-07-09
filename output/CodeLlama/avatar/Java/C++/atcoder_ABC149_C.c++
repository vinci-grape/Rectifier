#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x;
    cin >> x;
    if (x != 2 && x % 2 == 0) x++;
    while (true) {
        int i;
        double sqrtNum = sqrt(x);
        for (i = 3; i <= sqrtNum; i += 2) {
            if (x % i == 0) break;
        }
        if (i > sqrtNum) break;
        x += 2;
    }
    cout << x << endl;
}