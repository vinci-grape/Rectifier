#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s.replace(s.find(","), 1, " ");
    return 0;
}