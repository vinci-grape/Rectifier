#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string line;
    vector<string> scList;
    while (getline(cin, line)) {
        scList.push_back(line);
    }
    stringstream ss(scList[0]);
    int Sheep, Wolve;
    ss >> Sheep >> Wolve;
    if (Wolve >= Sheep) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
}