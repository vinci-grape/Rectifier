#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main ( )
{
    int a, b ;
    cin >> a >> b ;
    cout << min ( a, b ) << endl ;
    cout << max ( a, b ) - min ( a, b ) << endl ;
    return 0 ;
}