#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<double> x(N);
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (s.find("JPY")!= string::npos) {
            x[i] = stod(s.replace("JPY", "")) * 1.0;
        } else if (s.find("BTC")!= string::npos) {
            x[i] = stod(s.replace("BTC", "")) * 380000.0;
        }
    }
    cout << accumulate(x.begin(), x.end(), 0.0) << endl;
    return 0;
}