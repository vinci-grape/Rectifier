#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    if (k%2==1)
        cout << (n/k)**3;
    else
        cout << (n/k)**3+((n+k/2)/k)**3;
    return 0;
}