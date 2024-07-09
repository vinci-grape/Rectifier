#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            n = i;
            cout << i << " ";
        }
    }
    return 0;
}