#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, DIF1, DIF2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    DIF1 = x2 - x1;
    DIF2 = y2 - y1;
    x3 = x2 - DIF2;
    y3 = y2 + DIF1;
    x4 = x1 - DIF2;
    y4 = y1 + DIF1;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}