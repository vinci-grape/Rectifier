#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        v.push_back(stoi(temp));
    }
    if (count(v.begin(), v.end(), 5) == 2)
    {
        if (accumulate(v.begin(), v.end(), 0) == 17)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}