#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string record_of_movements;
    cin >> record_of_movements;
    int x = 0, y = 0;
    map<char, pair<int, int> > d_movement;
    d_movement['L'] = make_pair(0, -1);
    d_movement['R'] = make_pair(0, 1);
    d_movement['U'] = make_pair(1, 0);
    d_movement['D'] = make_pair(-1, 0);
    map<pair<int, int>, string> d;
    d[make_pair(x, y)] = "";
    bool bug = false;
    for (int i = 0; i < record_of_movements.length(); i++)
    {
        pair<int, int> temp = make_pair(x, y);
        x += d_movement[record_of_movements[i]].first;
        y += d_movement[record_of_movements[i]].second;
        if (make_pair(x, y) not in d)
        {
            for (auto step : d_movement)
            {
                if (make_pair(x + d_movement[step].first, y + d_movement[step].second)!= temp && make_pair(x + d_movement[step].first, y + d_movement[step].second) in d)
                {
                    bug = true;
                    break;
                }
            }
        }
        else
        {
            bug = true;
        }
        if (bug)
        {
            break;
        }
        d[make_pair(x, y)] = "";
    }
    if (bug)
    {
        cout << "BUG" << endl;
    }
    else
    {
        cout << "OK" << endl;
    }
    return 0;
}