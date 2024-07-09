#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<double, string>> mo;
    
    for (int i = 0; i < N; i++) {
        double x;
        string u;
        cin >> x >> u;
        mo.push_back(make_pair(x, u));
    }
    
    double okz = 0;
    
    for (int i = 0; i < mo.size(); i++) {
        if (mo[i].second == "JPY") {
            okz += mo[i].first;
        } else {
            okz += mo[i].first * 380000;
        }
    }
    
    cout << okz << endl;
    
    return 0;
}