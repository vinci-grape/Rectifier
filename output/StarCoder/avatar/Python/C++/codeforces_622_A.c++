#include <iostream>
using namespace std;
int main()
{
    int n, l, r, mid, idxcnt;
    cin >> n;
    l = 1;
    r = n;
    while (l < r)
    {
        mid = l + (r - l) / 2;
        idxcnt = mid * (mid + 1) / 2;
        if (idxcnt < n)
            l = mid + 1;
        else
            r = mid;
    }
    l -= 1;
    idxcnt = l * (l + 1) / 2;
    cout << n - idxcnt << endl;
    return 0;
}