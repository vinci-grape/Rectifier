int n;
cin >> n;
string s;
cin >> s;
if (n % 2 != 0)
{
    cout << "No";
}
else if (s.substr(0, n / 2) == s.substr(n / 2, n / 2))
{
    cout << "Yes";
}
else
{
    cout << "No";
}