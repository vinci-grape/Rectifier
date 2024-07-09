#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int x;
    int a;
    int b;

    cin >> x >> a >> b;

    cout << ((x-a)%b) << endl;

    return 0;
}