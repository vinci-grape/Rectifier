#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int A[N];
    for (int i = 0; i < N; i++)
        A[i] = 0;

    for (int i = 0; i < K; i++)
    {
        int d;
        cin >> d;
        int AA[d];
        for (int j = 0; j < d; j++)
            cin >> AA[j];
        for (int j = 0; j < d; j++)
            A[AA[j] - 1] = 1;
    }

    int n = 0;
    for (int i = 0; i < N; i++)
        if (A[i] == 0)
            n++;
    cout << n;
    return 0;
}