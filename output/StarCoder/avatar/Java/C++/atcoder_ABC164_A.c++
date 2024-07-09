#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Sheep, Wolves;
    cin >> Sheep >> Wolves;
    if (Wolves >= Sheep)
        cout << "safe";
    else
        cout << "unsafe";
    return 0;
}