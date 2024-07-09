#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    set<int> c;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int a = s.find("S") - s.find("G");
        c.insert(a);
    }
    if (c.find(-1) != c.end())
        cout << -1;
    else
        cout << c.size();
    return 0;
}