#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> list;
    int a;
    while(cin >> a)
    {
        if(a == 0)
        {
            cout << list.back() << endl;
            list.pop_back();
        }
        else
        {
            list.push_back(a);
        }
    }
    return 0;
}