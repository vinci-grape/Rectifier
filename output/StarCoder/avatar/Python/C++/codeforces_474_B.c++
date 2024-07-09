#include <iostream>
using namespace std;
int main( )
{
    int L[ ], r = 1;
    cin >> L;
    for (int k = 0; k < L; k++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            L[j] = r;
        }
        r++;
    }
    cin >> L;
    for (int j = 0; j < L; j++)
    {
        cout << L[j] << endl;
    }
    return 0;
}