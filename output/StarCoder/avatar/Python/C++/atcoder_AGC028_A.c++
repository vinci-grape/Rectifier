#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;
    int list_S[N], list_T[M], Number_i[N], Number_iMN[N], Number_j[M], Kaburi_j[M], Kaburi_i[M];
    for (int i = 0; i < N; i++)
    {
        Number_i[i] = i;
    }
    for (int i = 0; i < N; i++)
    {
        Number_iMN[i] = i * M / N;
    }
    for (int j = 0; j < M; j++)
    {
        Number_j[j] = j;
    }
    for (int i = 0; i < M; i++)
    {
        Kaburi_j[i] = Number_iMN[i];
    }
    for (int i = 0; i < M; i++)
    {
        Kaburi_i[i] = int(Kaburi_j[i] * N / M);
    }
    int counter = 0;
    int Flag = 0;
    int Kaburi_Size = M;
    while (counter <= Kaburi_Size - 1)
    {
        if (S[Kaburi_i[counter]] == T[Kaburi_j[counter]])
        {
            counter++;
        }
        else
        {
            Flag = 1;
            break;
        }
    }
    if (Flag == 1)
    {
        cout << -1;
    }
    else
    {
        cout << N * M / gcd(N, M);
    }
    return 0;
}