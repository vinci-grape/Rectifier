#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string a[] = {"10", "100", "1000", "10000", "100000"};
    int newVal = 0;
    for (int i = 0; i < n.length(); i++)
    {
        newVal += n[i] - '0';
    }
    if (n == "10" || n == "100" || n == "1000" || n == "10000" || n == "100000")
    {
        cout << 10;
    }
    else
    {
        cout << newVal;
    }
    return 0;
}