#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    float a[n];
    float below = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        below += 1 / a[i];
    }
    cout << 1 / below;
    return 0;
}