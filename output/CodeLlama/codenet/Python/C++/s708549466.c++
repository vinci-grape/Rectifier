#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 1; i < N; i++)
    {
        int tmp = a[i - 1] + a[i];
        if (tmp > x)
        {
            if (tmp - x > a[i])
            {
                a[i - 1] = tmp - a[i] - x;
                a[i] = 0;
            }
            else
            {
                a[i] = a[i] - (tmp - x);
            }
            cnt += tmp - x;
        }
    }
    cout << cnt << endl;
    return 0;
}