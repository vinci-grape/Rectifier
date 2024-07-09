#include <iostream>
#include <vector>
using namespace std;
int main() {
    int memTime;
    cin >> memTime;
    vector<int> memLate;
    for (int i = 0; i < memTime; i++) {
        int member;
        cin >> member;
        memLate.push_back(member);
    }
    int highLate = 0;
    vector<int> colorList;
    for (int i = 0; i < memTime; i++) {
        if (memLate[i] / 400 >= 8) {
            highLate++;
        } else if (find(colorList.begin(), colorList.end(), memLate[i] / 400) == colorList.end()) {
            colorList.push_back(memLate[i] / 400);
        }
    }
    int maxColor = colorList.size() + highLate;
    int minColor = colorList.size();
    if (minColor == 0) {
        minColor = 1;
    }
    cout << minColor << " " << maxColor << endl;
    return 0;
}