#include <iostream>
using namespace std;
int main()
{
    int n, l[100000], high = 1, tower = 0, maximum = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (l[i] == l[i - 1])
        {
            tower--;
            high++;
        }
        else
        {
            if (high > maximum)
            {
                maximum = high;
            }
            high = 1;
        }
    }
    if (high > maximum)
    {
        maximum = high;
    }
    cout << maximum << " " << tower;
    return 0;
}