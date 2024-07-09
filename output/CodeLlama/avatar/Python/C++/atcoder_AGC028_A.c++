#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    string S, T;
    cin >> S >> T;
    vector<int> list_S(N);
    vector<int> list_T(M);
    vector<int> Number_i(N);
    vector<int> Number_iMN;
    vector<int> Kaburi_j;
    vector<int> Kaburi_i;
    for (int i = 0; i < N; i++)
    {
        list_S[i] = S[i];
        Number_i[i] = i;
    }
    for (int i = 0; i < M; i++)
    {
        list_T[i] = T[i];
    }
    for (int i = 0; i < N; i++)
    {
        Number_iMN.push_back(i * M / N);
    }
    for (int j = 0; j < M; j++)
    {
        Kaburi_j.push_back(j);
    }
    for (int i = 0; i < N; i++)
    {
        Kaburi_i.push_back(int(i * M / N));
    }
    int counter = 0;
    int Flag = 0;
    int Kaburi_Size = Kaburi_i.size();
    while (counter <= Kaburi_Size - 1)
    {
        if (list_S[Kaburi_i[counter]] == list_T[Kaburi_j[counter]])
        {
            pass;
        }
        else
        {
            Flag = 1;
            break;
        }
        counter++;
    }
    if (Flag == 1)
    {
        cout << -1;
    }
    else
    {
        cout << int(N * M / gcd(N, M));
    }
    return 0;
}