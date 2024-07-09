#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a==b)
        cout << a+b << endl;
    else
        cout << max(a,b)*2-1 << endl;
    return 0;
}