#include <iostream>
using namespace std;

int main() {
    int q, h, s, d;
    cin >> q >> h >> s >> d;
    int n;
    cin >> n;
    int min_1 = min(q*4, h*2, q*2+h, s);
    int min_2 = min(min_1*2, d);

    cout << ((n % 2)*min_1 + (n / 2)*min_2);
    return 0;
}