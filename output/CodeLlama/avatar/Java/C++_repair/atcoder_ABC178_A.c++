#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    bool boolVal = x == 1 ? true : false;
    int result = !boolVal ? 1 : 0;
    cout << result << endl;
    return 0;
}