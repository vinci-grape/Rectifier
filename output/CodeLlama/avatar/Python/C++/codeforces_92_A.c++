#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int i = 1;
    while (m >= i)
    {
        m -= i;
        i = (i % n) + 1;
    }
    cout << m;
    return 0;
}