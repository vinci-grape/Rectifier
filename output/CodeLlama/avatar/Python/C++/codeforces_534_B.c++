#include <iostream>
using namespace std;
int main()
{
    int v1, v2, t, d, a, v, distance;
    cin >> v1 >> v2;
    cin >> t >> d;
    a = 1;
    v = v1;
    distance = 0;
    for (int i = 0; i < t; i++)
    {
        if (v - v2 > (t - i - 1) * d)
        {
            a *= -1;
            v = (t - i - 1) * d + v2;
        }
        distance += v;
        v += a * d;
    }
    cout << distance;
    return 0;
}