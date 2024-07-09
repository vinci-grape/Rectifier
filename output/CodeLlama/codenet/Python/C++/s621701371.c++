#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, left, right;
    int q, f;
    cin >> s;
    cin >> q;
    bool n = false;
    for (int i = 0; i < q; i++)
    {
        cin >> f;
        if (f == 1)
            n = !n;
        else if (f == 2)
        {
            string c;
            cin >> c;
            if (n)
                left = c + left;
            else
                right = c + right;
        }
    }
    s = left + s + right;
    if (n)
        reverse(s.begin(), s.end());
    cout << s;
    return 0;
}