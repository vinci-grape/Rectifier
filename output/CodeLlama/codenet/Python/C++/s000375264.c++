#include <iostream>
using namespace std;

int main()
{
    int X, t;
    cin >> X >> t;
    int answer;
    if (X > t)
    {
        answer = X - t;
    }
    else if (X <= t)
    {
        answer = 0;
    }
    cout << answer;
    return 0;
}