#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(b % a == 0)
        cout << a + b;
    else
        cout << b - a;
    return 0;
}