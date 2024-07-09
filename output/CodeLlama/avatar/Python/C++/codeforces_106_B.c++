#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> input_array(n);
    for (int i = 0; i < n; i++)
    {
        int s, r, h, c;
        cin >> s >> r >> h >> c;
        input_array[i] = {s, r, h, c};
    }
    set<vector<int>> outdated;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (input_array[i][0] < input_array[j][0] && input_array[i][1] < input_array[j][1] && input_array[i][2] < input_array[j][2])
            {
                outdated.insert(input_array[i]);
            }
        }
    }
    int minimum_cost = 100000;
    int input_number = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int> current_item = input_array[i];
        int cost = current_item[3];
        if (current_item not in outdated && cost < minimum_cost)
        {
            minimum_cost = cost;
            input_number = i + 1;
        }
    }
    cout << input_number << endl;
    return 0;
}