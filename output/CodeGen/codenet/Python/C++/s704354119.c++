#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string l[n];
    for (int i = 0; i < n; ++i)
        cin >> l[i];
    int max = -1e9;
    int min = 1e9;
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += atoi(l[i].c_str());
        if (max < atoi(l[i].c_str()))
            max = atoi(l[i].c_str());
        if (min > atoi(l[i].c_str()))
            min = atoi(l[i].c_str());
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}