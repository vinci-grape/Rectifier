#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += list[i] % 2;
    }
    if (sum == 1)
    {
        cout << list.index(1) + 1 << endl;
    }
    else
    {
        cout << list.index(0) + 1 << endl;
    }
    return 0;
}