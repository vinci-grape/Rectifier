#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;
    if((A+B)%2 == 1)
        cout << "IMPOSSIBLE";
    else
        cout << (A+B)/2;
    return 0;
}