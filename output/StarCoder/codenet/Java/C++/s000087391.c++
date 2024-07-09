#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() {
    vector<int> result;
    while(true) {
        string line;
        getline(cin, line);
        int n = atoi(line.c_str());
        if(n==0) {
            break;
        }
        int sum = 0;
        int num = 0;
        for(int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            istringstream iss(line);
            int temp;
            iss >> temp;
            sum += temp;
            if(temp <= sum/n) {
                num++;
            }
        }
        result.push_back(num);
    }
    for(int i = 0; i < result.size(); i++) {
        if(result[i] == -1) {
            cout << "NONE" << endl;
        }
        else {
            cout << result[i] << endl;
        }
    }
    return 0;
}