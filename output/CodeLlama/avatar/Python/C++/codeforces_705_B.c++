#include <iostream>
using namespace std;
int main()
{
    int n, i, c = 2;
    cin >> n;
    int w[n];
    for (i = 0; i < n; i++)
        cin >> w[i];
    for (i = 0; i < n; i++)
    {
        if (w[i] == 1)
            cout << c << endl;
        else if (w[i] % 2 == 0)
            c = 3 - c;
        else
            cout << c << endl;
    }
    return 0;
}