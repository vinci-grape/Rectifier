#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (A < 10 && B < 10)
        cout << A * B;
    else
        cout << -1;
    return 0;
}