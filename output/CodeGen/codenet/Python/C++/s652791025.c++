#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n - 1;
    if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9)
        cout << "hon";
    else if (n == 0 || n == 1 || n == 6 || n == 8)
        cout << "pon";
    else
        cout << "bon";
    return 0;
}