#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int m[10][3][10];
    for (int i = 0; i < N; i++)
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        m[b-1][f-1][r-1] += v;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << m[i][j][k] << " ";
            }
            cout << endl;
        }
        if (i < 3)
        {
            cout << "##################" << endl;
        }
    }
    return 0;
}