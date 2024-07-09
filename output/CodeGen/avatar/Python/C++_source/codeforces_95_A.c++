int pya = 0;
string arre[];
while (pya)
{
    pya--;
    arre.push_back(cin.get());
}
string oString = cin.get();
string lowString = oString.toLower();
char letter1 = cin.get().toLower()[0];
char letter2 = 'a';
if (letter1!= 'a')
    letter2 = 'b';
set<int> setcito;
for (int i = 0; i < arre.size(); i++)
{
    if (lowString.find(arre[i]) >= 0)
    {
        int wat = 0;
        while (true)
        {
            int index = lowString.find(arre[i], wat);
            if (index < 0)
                break;
            for (int j = index; j < index + arre[i].size(); j++)
                setcito.insert(j);
            wat = index + 1;
        }
    }
}
string oString = cin.get();
for (int i = 0; i < oString.size(); i++)
{
    char letter = letter1;
    if (oString[i].isLower())
        letter = letter1;
    else
        letter = letter2;
    if (oString[i]!= letter)
        oString[i] = letter;
}
for (int i = 0; i < oString.size(); i++)
    cout << oString[i];
cout << endl;