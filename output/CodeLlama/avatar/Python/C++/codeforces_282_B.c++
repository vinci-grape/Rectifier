int firstline;
cin >> firstline;
int total = 0;
string memory;
for (int x = 0; x < firstline; x++)
{
    int A, G;
    cin >> A >> G;
    if (total + A <= 500)
    {
        total += A;
        memory += "A";
    }
    else
    {
        total -= G;
        memory += "G";
    }
}
cout << memory << endl;