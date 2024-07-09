#include <iostream>
using namespace std;
int main()
{
    int princess, dragon, t, f, c, result = 0;
    cin >> princess >> dragon >> t >> f >> c;
    if (dragon <= princess)
    {
        cout << 0;
        return 0;
    }
    int position = t * princess;
    position += princess * position / (dragon - princess);
    while (position < c)
    {
        result++;
        position += princess * position / dragon;
        position += princess * f;
        position += princess * position / (dragon - princess);
    }
    cout << result;
    return 0;
}