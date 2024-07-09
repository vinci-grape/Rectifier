#include <iostream>
#include <cstdlib>
using namespace std;

int main ( )
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << 360 / gcd ( 360, x ) << endl;
    return 0;
}