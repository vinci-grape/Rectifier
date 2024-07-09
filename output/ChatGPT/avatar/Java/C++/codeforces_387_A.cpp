#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;
    
    int hour1 = stoi(s.substr(0, 2));
    int minute1 = stoi(s.substr(3, 2));
    
    int hour2 = stoi(t.substr(0, 2));
    int minute2 = stoi(t.substr(3, 2));
    
    chrono::hours h(hour1 - hour2);
    chrono::minutes m(minute1 - minute2);
    chrono::duration<int> diff = h + m;

    cout << setfill('0') << setw(2) << diff.count() / 60 << ":" << setw(2) << diff.count() % 60 << endl;

}