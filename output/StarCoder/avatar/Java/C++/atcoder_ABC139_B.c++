#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    cout << (B - 1) / (A - 1) + (B - 1) % (A - 1) / (A - 1);
}