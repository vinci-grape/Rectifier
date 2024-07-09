#include <iostream>
using namespace std;
int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int count = 0;
    for (int i = a; i <= x; i++)
    {
        for (int j = b; j <= y; ++j)
        {
            if (i <= j)
                continue;
            count++;
        }
    }
    cout << count << endl;
    for (int i = a; i <= x; i++)
    {
        for (int j = b; j <= y; ++j)
        {
            if (i <= j)
                continue;
            cout << i << " " << j << endl;
        }
    }
    return 0;
}