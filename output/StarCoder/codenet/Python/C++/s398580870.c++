#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1)
        cout << (n / k) * (n / k) * (n / k);
    else
        cout << (n / k) * (n / k) * (n / k) + ((n + k / 2) / k) * ((n + k / 2) / k) * ((n + k / 2) / k);
    return 0;
}