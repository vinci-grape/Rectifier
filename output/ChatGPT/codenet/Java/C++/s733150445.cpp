#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    istringstream iss(line);
    string token;
    getline(iss, token, ' ');
    double a = stod(token);
    getline(iss, token, ' ');
    double b = stod(token);
    double mul = a * b;
    string mul_str = to_string(mul);
    int dot_pos = mul_str.find('.');
    string result = mul_str.substr(0, dot_pos);
    cout << result << endl;

    return 0;
}