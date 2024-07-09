#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    cout << A * (N/(A+B)) + min(A, N%(A+B)) << endl;
    return 0;
}