#include <iostream>
using namespace std;

int Answer(int y, int m, int d) {
    int result = 1;

    if (y % 3 == 0) {
        result += 20 - d;
    } else if (m % 2 == 0) {
        result += 19 - d;
    } else {
        result += 20 - d;
    }

    for (m+=1; m <= 10; m++) {
        if (y % 3 == 0) {
            result += 20;
        } else {
            if (m % 2 == 0) {
                result += 19;
            } else {
                result += 20;
            }
        }
    }

    for (y += 1; y < 1000; y++) {
        if (y % 3 == 0) {
            result += 200;
        } else {
            result += 195;
        }
    }
    return result;
}

int main() {
    int count;
    cin >> count;
    for (int i = 0; count > i; i++) {
        int y, m, d;
        cin >> y >> m >> d;
        cout << Answer(y, m, d) << endl;
    }
}