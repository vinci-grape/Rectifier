#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < alphabets.size(); ++i)
    {
        if (s == alphabets[i])
        {
            cout << alphabets[i + 1];
            return 0;
        }
    }
    cout << "Not found";
    return 0;
}