#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if (a <= 8 && b <= 8)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
    return 0;
}