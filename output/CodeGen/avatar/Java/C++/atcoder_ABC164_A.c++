#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class atcoder_ABC164_A {
public:
    int Sheep;
    int Wolve;
    vector<string> scList;
    atcoder_ABC164_A(int sheep, int wolve) {
        Sheep = sheep;
        Wolve = wolve;
    }
    void input() {
        cin >> Sheep >> Wolve;
        for (int i = 0; i < Sheep; i++) {
            string s;
            cin >> s;
            scList.push_back(s);
        }
    }
    void output() {
        cout << "unsafe" << endl;
    }
};

int main() {
    int sheep, wolve;
    atcoder_ABC164_A a(sheep, wolve);
    a.input();
    a.output();
    return 0;
}