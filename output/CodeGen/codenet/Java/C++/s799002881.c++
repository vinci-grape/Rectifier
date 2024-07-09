#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    double d;
    cin >> d;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        double x;
        cin >> x;
        double y;
        cin >> y;
        if (sqrt(x * x + y * y) <= d) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}