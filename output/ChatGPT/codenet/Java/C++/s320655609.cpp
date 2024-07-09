#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Main {
    vector<long long> constraints;
    long long N;
    long long result;

public:
    Main() {
        cin >> N;
        for (int i = 0; i < 5; ++i) {
            long long c;
            cin >> c;
            constraints.push_back(c);
        }

        calc();
    }

    void calc() {
        long long minVal = *min_element(constraints.begin(), constraints.end());
        long long time = N / minVal;
        if (N % minVal != 0) {
            ++time;
        }
        time += 4;
        result = time;
    }

    void printResult() {
        cout << result << endl;
    }
};

int main() {
    Main ins;
    ins.printResult();

}