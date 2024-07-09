#include<iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int DIF1 = x2 - x1;
    int DIF2 = y2 - y1;
    int x3 = x2 - DIF2;
    int y3 = y2 + DIF1;
    int x4 = x1 - DIF2;
    int y4 = y1 + DIF1;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

    return 0;
}