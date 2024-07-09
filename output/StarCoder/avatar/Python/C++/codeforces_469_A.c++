#include <iostream>
#include <set>
using namespace std;
int main()
{
    int max_level;
    cin >> max_level;
    set<int> x;
    set<int> y;
    for (int i = 0; i < max_level; i++)
    {
        int temp;
        cin >> temp;
        x.insert(temp);
    }
    for (int i = 0; i < max_level; i++)
    {
        int temp;
        cin >> temp;
        y.insert(temp);
    }
    if (x.find(0)!= x.end())
        x.erase(0);
    if (y.find(0)!= y.end())
        y.erase(0);
    if (x.size()!= max_level || y.size()!= max_level)
        cout << "Oh, my keyboard!" << endl;
    else
        cout << "I become the guy." << endl;
    return 0;
}