#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N%9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}