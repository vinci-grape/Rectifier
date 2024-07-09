#include <iostream>
#include <string>
using namespace std;

int main ( )
{
    string s;
    cin >> s;
    string result;
    if (s.find("A") != string::npos && s.find("B") != string::npos) {
        result = "Yes";
    } else {
        result = "No";
    }
    cout << result << endl;
    return 0;
}