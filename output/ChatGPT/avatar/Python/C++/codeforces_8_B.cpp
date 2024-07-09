#include <iostream>
#include <map>
using namespace std;

int main() {
    string record_of_movements;
    cin >> record_of_movements;
    
    int x = 0, y = 0;
    map<pair<int, int>, bool> d;
    map<char, pair<int, int>> d_movement = {{'L', {0, -1}}, {'R', {0, 1}}, {'U', {1, 0}}, {'D', {-1, 0}}};
    bool bug = false;
    
    for (char move : record_of_movements) {
        pair<int, int> temp = make_pair(x, y);
        x += d_movement[move].first;
        y += d_movement[move].second;
        
        if (d.find(make_pair(x, y)) == d.end()) {
            for (auto step : d_movement) {
                if (make_pair(x + step.second.first, y + step.second.second) != temp && d.find(make_pair(x + step.second.first, y + step.second.second)) != d.end()) {
                    bug = true;
                    break;
                }
            }
        } else {
            bug = true;
        }
        
        if (bug) {
            break;
        }
        
        d[make_pair(x, y)] = true;
    }
    
    if (bug) {
        cout << "BUG" << endl;
    } else {
        cout << "OK" << endl;
    }
    
    return 0;
}