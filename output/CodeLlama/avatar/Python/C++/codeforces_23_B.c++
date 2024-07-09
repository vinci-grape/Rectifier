#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < 2)
            cout << 0 << endl;
        if (a >= 2)
            cout << a - 2 << endl;
    }
    return 0;
}