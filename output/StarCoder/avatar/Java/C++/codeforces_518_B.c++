#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int ura = 0, opa = 0;
    map<char, int> tmap;
    for (int i = 0; i < t.length(); i++)
    {
        char ch = t[i];
        if (!tmap.count(ch))
            tmap[ch] = 1;
        else
            tmap[ch]++;
    }
    int length = s.length();
    for (int i = 0; i < length; i++)
    {
        char ch = s[i];
        int num = tmap[ch];
        if (num == 0)
            continue;
        int inum = num;
        if (inum == 1)
            tmap.erase(ch);
        else
            tmap[ch] = inum - 1;
        s[i] = 'Я';
        ura++;
    }
    for (int i = 0; i < length; i++)
    {
        char ch = s[i];
        char rch = reverse(ch);
        int num = tmap[rch];
        if (num == 0)
            continue;
        int inum = num;
        if (inum == 1)
            tmap.erase(rch);
        else
            tmap[rch] = inum - 1;
        opa++;
    }
    cout << ura << " " << opa << endl;
}

char reverse(char ch)
{
    if (islower(ch))
        return toupper(ch);
    else
        return tolower(ch);
}