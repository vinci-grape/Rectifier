#include <iostream>
using namespace std;

int main()
{
    string num;
    cin >> num;
    if (stoi(num) % 4 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}