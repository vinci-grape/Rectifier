#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> p_copy(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p_copy[i] = p[i];
    }

    sort(p.begin(), p.end());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] != p_copy[i])
        {
            count++;
        }
    }

    if (count == 0 || count == 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}