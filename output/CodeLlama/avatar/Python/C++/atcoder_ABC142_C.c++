#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < N - 1; i++)
    {
        cout << A[i] << " ";
    }
    cout << A[N - 1];
    return 0;
}