#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    double mo[N];
    for (int i = 0; i < N; i++)
    {
        cin >> mo[i];
    }
    double okz = 0;
    for (int i = 0; i < N; i++)
    {
        if (mo[i] == 1)
        {
            okz += mo[i];
        }
        else
        {
            okz += mo[i] * 380000;
        }
    }
    cout << okz;
    return 0;
}