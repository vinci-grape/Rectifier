#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<string> qs(q);
    for (int i = 0; i < q; i++)
        cin >> qs[i];
    bool n = false;
    string left, right;
    for (auto operation : qs)
    {
        if (operation[0] == '1')
            n =!n;
        if (operation[0] == '2')
        {
            string t, f, c;
            cin >> t >> f >> c;
            int f_ = stoi(f);
            if (n)
                f_ = 1 if (f_!= 1) else 2;
            if (f_ == 1)
                left = c + left;
            else if (f_ == 2)
                right += c;
        }
    }
    string s_ = left + s + right;
    cout << (n? s_[::-1] : s_) << endl;
}