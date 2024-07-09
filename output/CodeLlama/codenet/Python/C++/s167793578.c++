#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int a = N * (N - 1) / 2;
    int b = M * (M - 1) / 2;

    cout << a + b << endl;

    return 0;
}