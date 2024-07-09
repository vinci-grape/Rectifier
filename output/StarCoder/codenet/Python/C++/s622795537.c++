#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> arr;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (arr.find(s) == arr.end())
            arr[s] = 1;
        else
            arr[s]++;
    }
    int max_count = *max_element(arr.begin(), arr.end(), [](const pair<string, int> &a, const pair<string, int> &b) { return a.second < b.second; });
    vector<string> out_sort;
    for (auto it = arr.begin(); it!= arr.end(); it++)
    {
        if (it->second == max_count)
            out_sort.push_back(it->first);
    }
    sort(out_sort.begin(), out_sort.end());
    for (auto it = out_sort.begin(); it!= out_sort.end(); it++)
        cout << *it << endl;
    return 0;
}