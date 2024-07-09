#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    while(true) {
        string line;
        getline(cin, line);
        n = stoi(line);
        if(n == 0) {
            break;
        }
        vector<int> input;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            input.push_back(x);
        }
        double avg = 0;
        for(int i = 0; i < n; i++) {
            avg += input[i];
        }
        avg /= n;
        int num = 0;
        for(int i = 0; i < n; i++) {
            if(input[i] <= avg) {
                num++;
            }
        }
        cout << num << endl;
    }
    return 0;
}