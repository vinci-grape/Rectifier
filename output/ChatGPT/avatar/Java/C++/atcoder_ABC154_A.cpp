#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    istringstream iss(str);
    string a_str, b_str;
    iss >> a_str >> b_str;
    int a = stoi(a_str);
    int b = stoi(b_str);
    string u;
    getline(cin, u);
    cout << (u == a_str ? to_string(a - 1) + " " + b_str : a_str + " " + to_string(b - 1)) << endl;
    
}