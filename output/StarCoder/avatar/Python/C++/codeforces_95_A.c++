#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> arre;
    while (n--)
    {
        string s;
        cin >> s;
        arre.push_back(s);
    }
    string oString;
    cin >> oString;
    string lowString = oString;
    for (int i = 0; i < oString.length(); i++)
        lowString[i] = tolower(oString[i]);
    char letter1 = tolower(oString[0]);
    char letter2 = 'a' if letter1!= 'a' else 'b';
    vector<int> valid(oString.length(), 0);
    set<int> setcito;
    for (string x : arre)
    {
        int wat = 0;
        while (true)
        {
            int index = lowString.find(x, wat);
            if (index < 0)
                break;
            for (int i = index; i < index + x.length(); i++)
                setcito.insert(i);
            wat = index + 1;
        }
    }
    for (int i : setcito)
    {
        char letter = letter1 if lowString[i]!= letter1 else letter2;
        oString[i] = letter if islower(oString[i]) else toupper(letter);
    }
    for (char x : oString)
        cout << x;
    cout << endl;
    return 0;
}