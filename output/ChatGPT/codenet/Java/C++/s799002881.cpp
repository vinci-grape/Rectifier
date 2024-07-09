#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double d;
    cin >> n >> d;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        if(sqrt(x*x + y*y) <= d) {
            cnt++;
        }
    }
    cout << cnt << endl;


    return 0;
}