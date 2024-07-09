#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string q[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (j == k)
            {
                continue;
            }
            else if (q[j][0] == q[k][q[k].length() - 1])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
    }
    cout << count;
    return 0;
}