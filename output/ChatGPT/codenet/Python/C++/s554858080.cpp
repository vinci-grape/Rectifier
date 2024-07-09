#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> input;
    string temp;
    while (cin >> temp) {
        input.push_back(temp);
    }
    
    string num = "";
    for (int i = 0; i < input.size(); i++) {
        num += input[i];
    }
    
    if (stoi(num) % 4 == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}