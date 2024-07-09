#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h = n / 3600;
    n %= 3600;
    int m = n / 60;
    n %= 60;
    cout << h << ":" << m << ":" << n;
    return 0;
}