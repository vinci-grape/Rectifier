#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "Yes";
    if (s.find("A") == string::npos || s.find("B") == string::npos)
        result = "No";
    cout << result << endl;
    return 0;
}