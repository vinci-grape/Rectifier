#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string soz;
    cin >> soz;
    int a[soz.size() + 1];
    for (int i = 1; i < soz.size(); i++)
    {
        a[i] = a[i - 1];
        if (soz[i - 1] == soz[i])
        {
            a[i] += 1;
        }
    }
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int m, l;
        cin >> m >> l;
        arr.push_back(a[l - 1] - a[m - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}