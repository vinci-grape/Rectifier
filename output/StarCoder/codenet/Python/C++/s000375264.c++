#include <iostream>
using namespace std;
 
int main()
{
    int X, t;
    cin >> X >> t;
 
    if (X > t)
    {
        cout << X - t;
    }
    else
    {
        cout << 0;
    }
 
    return 0;
}