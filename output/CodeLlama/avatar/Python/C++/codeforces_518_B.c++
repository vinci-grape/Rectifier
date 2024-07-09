#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    map<char, int> freqs, freqt;
    int yay = 0, whoops = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (freqs.find(s[i]) != freqs.end())
            freqs[s[i]]++;
        else
            freqs[s[i]] = 1;
    }
    for (int i = 0; i < t.length(); i++)
    {
        if (freqt.find(t[i]) != freqt.end())
            freqt[t[i]]++;
        else
            freqt[t[i]] = 1;
    }
    for (auto it : freqs)
    {
        while (it.second > 0 && freqt.find(it.first) != freqt.end() && freqt[it.first] > 0)
        {
            yay++;
            freqs[it.first]--;
            freqt[it.first]--;
        }
    }
    for (auto it : freqs)
    {
        while (it.second > 0)
        {
            if (it.first >= 'a' && it.first <= 'z' && freqt.find(it.first - 'a' + 'A') != freqt.end() && freqt[it.first - 'a' + 'A'] > 0)
            {
                whoops++;
                freqs[it.first]--;
                freqt[it.first - 'a' + 'A']--;
            }
            else if (it.first >= 'A' && it.first <= 'Z' && freqt.find(it.first - 'A' + 'a') != freqt.end() && freqt[it.first - 'A' + 'a'] > 0)
            {
                whoops++;
                freqs[it.first]--;
                freqt[it.first - 'A' + 'a']--;
            }
            else
                break;
        }
    }
    cout << yay << " " << whoops;
    return 0;
}