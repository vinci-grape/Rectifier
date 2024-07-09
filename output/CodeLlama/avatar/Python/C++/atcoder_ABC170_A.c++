#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> a;
    string s;
    getline(cin, s);
    copy(s.begin(), s.end(), back_inserter(a));
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}