#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0 || b % 2 == 0)
        cout << "No";
    else
        cout << "Yes";
    return 0;
}