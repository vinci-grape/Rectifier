#include <iostream>
using namespace std;

int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    
    long long j = 2, i, x1 = 0, y1 = 0, c = 0;
    bool ans = true;
    c = max(x, y);
    
    if (c > b) {
        cout << "0" << endl;
        ans = false;
    }
    
    while (c % min(x, y) != 0 && ans) {
        if (x > y) {
            c = x * j;
            j++;
        } else {
            c = y * j;
            j++;
        }
        
        if (c > b) {
            cout << "0" << endl;
            ans = false;
            break;
        }
    }
    
    if (ans) {
        long long count = 0;
        i = a;
        
        for (i = a; i <= b; i++) {
            if (i % c == 0) break;
        }
        
        if (i != b + 1)
            cout << ((b - i) / c) + 1 << endl;
        else
            cout << "0" << endl;
    }
    
    return 0;
}