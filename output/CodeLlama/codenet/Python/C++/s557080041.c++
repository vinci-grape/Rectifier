#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    if (N == 0)
    {
        cout << "Yes";
    }
    else
    {
        string N_str = to_string(N);
        int L[N_str.length()];
        for (int i = 0; i < N_str.length(); i++)
        {
            L[i] = N_str[i] - '0';
        }
        int X = 0;
        for (int i = 0; i < N_str.length(); i++)
        {
            X += L[i];
        }
        if (X % 9 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    return 0;
}