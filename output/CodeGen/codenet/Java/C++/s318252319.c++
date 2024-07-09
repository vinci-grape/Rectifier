#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    if (n == 3) cout << "bon";
    else if (n == 0 || n == 1 || n == 6 || n == 8) cout << "pon";
    else cout << "hon";
    return 0;
}