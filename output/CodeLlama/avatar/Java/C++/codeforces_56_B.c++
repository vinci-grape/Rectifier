#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int len;
    cin >> len;
    int a[len];
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    int l = 0, r = 0;
    bool flag = false;
    bool isTrue = false;
    loop:
    for (int i = 0; i < len; i++)
    {
        if (a[i] != i + 1 && !flag)
        {
            l = i + 1;
            flag = true;
            continue;
        }
        if (a[i] != i + 1 && flag)
        {
            r = i + 1;
            if (a[r - 1] - a[r - 2] > 0)
            {
                isTrue = true;
                break loop;
            }
        }
    }
    cout << (isTrue ? l + " " + r : "0" + " " + "0");
}