#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a;
    int ar[a];
    int max = 0, min = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> ar[i];
        max = max > ar[i] - ar[0]? max : ar[i] - ar[0];
        min = min < ar[i] - ar[0]? min : ar[i] - ar[0];
    }
    cout << min << " " << max;
    return 0;
}