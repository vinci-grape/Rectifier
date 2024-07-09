#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    int memTime;
    cin >> memTime;
    string memLate;
    cin >> memLate;
    int memLate[memTime];
    for (int i = 0; i < memTime; i++) {
        cin >> memLate[i];
    }
    int colorList[memTime];
    int memColor = 0;
    int highLate = 0;
    for (int i = 0; i < memTime; i++) {
        if (memLate[i] / 400 >= 8) {
            highLate++;
        }
        else if (memLate[i] / 400 in colorList) {
            colorList[memColor] = memLate[i] / 400;
            memColor++;
        }
        else {
            colorList[memColor] = memLate[i] / 400;
            memColor++;
        }
    }
    int maxColor = memColor + highLate;
    int minColor = memColor;
    if (minColor == 0) {
        minColor = 1;
    }
    cout << minColor << " " << maxColor << endl;
    return 0;
}