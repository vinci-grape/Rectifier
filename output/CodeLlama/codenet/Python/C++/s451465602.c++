#include <iostream>
using namespace std;
int main()
{
    int n, h, m, s;
    cin >> n;
    h = n / 3600;
    n %= 3600;
    m = n / 60;
    n %= 60;
    s = n;
    cout << h << ":" << m << ":" << s;
    return 0;
}