#include <bits/stdc++.h>
using namespace std;

int main()
{
    int candy[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> candy[i];
    }
    sort(candy, candy + 3);
    cout << (candy[0] + candy[1] == candy[2]? "Yes" : "No") << endl;
}