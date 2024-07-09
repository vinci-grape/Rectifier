#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = a + b;
    int y = a - b;
    int z = a * b;

    cout << max(x, max(y, z));
    return 0;
}