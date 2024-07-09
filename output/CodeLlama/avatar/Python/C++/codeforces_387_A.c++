#include <iostream>
using namespace std;
int main()
{
    int h1, m1, h2, m2;
    cin >> h1 >> m1;
    m1 += h1 * 60;
    cin >> h2 >> m2;
    m2 += h2 * 60;
    m2 = m1 - m2;
    m2 %= 1440;
    cout << m2 / 60 << ":" << m2 % 60 << endl;
    return 0;
}