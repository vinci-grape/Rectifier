#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> N_list;
    for (int i = 1; i <= N; i++)
    {
        N_list.push_back(i);
    }
    vector<vector<int>> n;
    for (int i = 0; i < N_list.size(); i++)
    {
        for (int j = 0; j < N_list.size(); j++)
        {
            for (int k = 0; k < N_list.size(); k++)
            {
                vector<int> temp;
                temp.push_back(N_list[i]);
                temp.push_back(N_list[j]);
                temp.push_back(N_list[k]);
                n.push_back(temp);
            }
        }
    }
    cout << n.size();
    return 0;
}