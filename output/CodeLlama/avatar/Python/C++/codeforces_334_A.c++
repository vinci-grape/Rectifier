#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    i = 1;
    j = n * n;
    while (i < j)
    {
        cout << i << " " << j << endl;
        i++;
        j--;
    }
    return 0;
}