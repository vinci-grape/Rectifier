#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    solve(n);
}
void solve(int n)
{
    cout << (n / 3) * 2 + (n % 3 == 0 ? 0 : 1);
}