#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> scList;
    string line;
    while (getline(cin, line)) {
        scList.push_back(line);
    }
    
    string numlist = scList[0];
    int pos = numlist.find(' ');
    int Sheep = stoi(numlist.substr(0, pos));
    int Wolve = stoi(numlist.substr(pos + 1));
    
    if (Wolve >= Sheep) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
    
    return 0;
}