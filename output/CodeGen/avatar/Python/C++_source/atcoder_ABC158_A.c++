#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string s;
    cin >> s;
    string result = "Yes" if "A" in s and "B" in s else "No";
    cout << result << endl;
    return 0;
}