#include <iostream>
using namespace std;
int main()
{
    int a, v, b, w, t;
    cin >> a >> v >> b >> w >> t;
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else if (v <= w)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (t < abs(a - b) / (v - w))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}