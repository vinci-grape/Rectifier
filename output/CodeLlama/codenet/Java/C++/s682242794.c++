#include <iostream>
using namespace std;
int main()
{
    int high, low, sa;
    for (int i = 0; i < 7; i++)
    {
        cin >> high;
        cin >> low;
        sa = high - low;
        cout << sa << endl;
    }
    return 0;
}