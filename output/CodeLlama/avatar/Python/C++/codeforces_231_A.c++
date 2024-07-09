#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int l1;
        cin >> l1;
        if (l1 > 1)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}