#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        long long s = 0;
        int x = (int)(log(n) / log(2)) + 1;
        s = -1 * (long long)pow(2, x) + 2 + (long long)n * (long long)(n + 1) / 2 - (long long)pow(2, x);
        cout << s << endl;
    }
    return 0;
}