#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    vector<int> result;
    string line;
    int n = -1;
    while(true) {
        getline(cin,line);
        stringstream ss(line);
        ss >> n;
        if(n==0 ){
            break;
        }
        int sum = 0;
        int input[n];
        for(int i = 0; i < n;i++) {
            ss >> input[i];
            sum+=input[i];
        }
        double avg = (double)sum/(double)n;
        int num = 0;
        for(int i =0; i < n; i++) {
            if(input[i] <= avg) {
                num++;
            }
        }
        result.push_back(num);
    }
    for(int i = 0;i < (result.size());i++) {
        if(result[i] == -1) {
            cout << "NONE" << endl;
        }
        else {
            cout << result[i] << endl;
        }
    }
    return 0;
}