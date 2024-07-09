#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A[4];
    for (int i = 0; i < 4; i++)
        cin >> A[i];
    if (A[1] <= A[2] || A[3] <= A[0])
        cout << 0 << endl;
    else
    {
        sort(A, A + 4);
        cout << A[2] - A[1] << endl;
    }
    return 0;
}