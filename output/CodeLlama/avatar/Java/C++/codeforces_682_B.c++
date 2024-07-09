#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> list;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list.push_back(x);
    }
    sort(list.begin(), list.end());
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (list[i] >= c)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}