#include <iostream>
using namespace std;

int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if (x >= r && (W - r) >= x)
    {
        if (y >= r && (H - r) >= y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}