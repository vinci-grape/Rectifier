#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int rNum = 0, gNum = 0, bNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
            rNum++;
        if (s[i] == 'G')
            gNum++;
        if (s[i] == 'B')
            bNum++;
    }
    int sum = 0;
    for (int step = 1; step <= ceil(n / 2.0) + 1; step++)
    {
        for (int i = 0; i < n - 2 * step; i++)
        {
            string s1 = s.substr(i, step);
            string s2 = s.substr(i + step, step);
            string s3 = s.substr(i + step * 2, step);
            if (s1 == "RGB" || s1 == "RBG" || s1 == "BGR" || s1 == "BRG" || s1 == "GBR" || s1 == "GRB")
                sum++;
            if (s2 == "RGB" || s2 == "RBG" || s2 == "BGR" || s2 == "BRG" || s2 == "GBR" || s2 == "GRB")
                sum++;
            if (s3 == "RGB" || s3 == "RBG" || s3 == "BGR" || s3 == "BRG" || s3 == "GBR" || s3 == "GRB")
                sum++;
        }
    }
    cout << rNum * gNum * bNum - sum << endl;
    return 0;
}