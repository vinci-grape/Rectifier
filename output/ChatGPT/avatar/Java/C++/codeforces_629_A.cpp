#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cin >> num;
    int counter = 0;
    int fine = 0;
    vector<string> arr;
    for (int i = 0; i < num; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    for (int i = 0; i < num; i++) {
        for (int k = 0; k < num; k++) {
            if (arr[k][i] == 'C') {
                counter++;
            }
        }
        fine += (counter * (counter - 1)) / 2;
        counter = 0;
    }
    for (int i = 0; i < num; i++) {
        for (int k = 0; k < num; k++) {
            if (arr[i][k] == 'C') {
                counter++;
            }
        }
        fine += (counter * (counter - 1)) / 2;
        counter = 0;
    }
    cout << fine << endl;
}