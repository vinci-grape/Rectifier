#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string a, b, str;
    cin >> n;
    cin.ignore();
    getline(cin, str);
    for (int i = 0; i < n / 2; i++)
    {
        a = a + str[i];
    }
    if (str == a + a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}