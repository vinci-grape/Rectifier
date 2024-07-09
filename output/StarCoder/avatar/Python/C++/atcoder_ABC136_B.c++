#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 1;
    int ans = 0;
    while (10 ** i <= N)
    {
        ans += (10 ** i - 10 ** (i - 1));
        i += 2;
    }
    ans += max(0, N - 10 ** (i - 1) + 1);
    cout << ans << endl;
    return 0;
}