#include <iostream>
using namespace std;
void solve(int n)
{
    cout << (n / 3) * 2 + (n % 3 == 0 ? 0 : 1);
}
int main()
{
    int n;
    cin >> n;
    solve(n);
}