#include <iostream>
using namespace std;
int main()
{
    int h, a, num = 0;
    cin >> h >> a;
    while (h > 0)
    {
        h = h - a;
        num++;
    }
    cout << num << endl;
    return 0;
}