#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.length() == 2)
    {
        cout << s;
    }
    else
    {
        cout << s.rbegin();
    }
    return 0;
}