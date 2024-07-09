#include <iostream>
using namespace std;
int main()
{
    int A, B, ans;
    cin >> A >> B;
    ans = A - 2 * B;
    if (ans < 0)
        ans = 0;
    cout << ans;
    return 0;
}