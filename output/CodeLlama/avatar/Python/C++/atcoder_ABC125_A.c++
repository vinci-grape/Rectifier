#include <iostream>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int cookie = 0;
    float time = a;
    while (time <= t + 0.5)
    {
        cookie += b;
        time += a;
    }
    cout << cookie;
    return 0;
}