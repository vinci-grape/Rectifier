#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    int B[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int count = 1;
    for (int i = 0; i < N; i++)
    {
        B[A[i] - 1] = count;
        count++;
    }
    for (int i = 0; i < N; i++)
    {
        cout << B[i] << " ";
    }
    return 0;
}