#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string LUCKY = "abcd";
    int n = 0;
    string s = "";
    for ( int i = 0; i < n; i++ )
    {
        s += LUCKY[i % 4];
    }
    cout << s << endl;
    return 0;
}