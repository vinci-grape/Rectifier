#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x[3];
    x[0] = a + b;
    x[1] = a - b;
    x[2] = a * b;
    cout << max(x) << endl;
    return 0;
}