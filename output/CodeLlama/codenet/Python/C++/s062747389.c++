#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a == b ? a + b : max(a, b) * 2 - 1) << endl;
    return 0;
}