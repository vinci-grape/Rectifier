#include <iostream>
using namespace std;

int main()
{
    int h, a;
    cin >> h >> a;
    int ans = h / a;
    int ama = h % a;
    if (ama != 0)
        ans++;
    cout << ans << endl;
    return 0;
}