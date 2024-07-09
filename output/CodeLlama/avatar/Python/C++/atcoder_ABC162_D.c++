#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int rNum = 0, gNum = 0, bNum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            rNum++;
        else if (s[i] == 'G')
            gNum++;
        else
            bNum++;
    }
    for (int step = 1; step <= ceil(n / 2.0); step++)
    {
        for (int i = 0; i < n - 2 * step; i++)
        {
            string s = s.substr(i, step * 2);
            if (s == "RGB" || s == "RBG" || s == "BGR" || s == "BRG" || s == "GBR" || s == "GRB")
                sum++;
        }
    }
    cout << rNum * gNum * bNum - sum;
    return 0;
}