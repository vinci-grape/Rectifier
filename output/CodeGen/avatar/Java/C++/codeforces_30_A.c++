#include <iostream>
#include <cstdlib>
using namespace std;

class codeforces_30_A {
public:
    codeforces_30_A(void);
    void solve(istream &in);
private:
    int A, B, n;
    int gcd(int a, int b);
    int lcm(int a, int b);
    int pow(int a, int b);
};

codeforces_30_A::codeforces_30_A(void) {
    cin >> A >> B >> n;
}

int codeforces_30_A::gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int codeforces_30_A::lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int codeforces_30_A::pow(int a, int b) {
    if (b == 0) return 1;
    if (b % 2 == 0) return pow(a, b / 2);
    return pow(a, b / 2) * a;
}

void codeforces_30_A::solve(istream &in) {
    if (A == 0) {
        if (B == 0) cout << 1;
        else cout << "No solution";
        return;
    }
    if (B % A!= 0) {
        cout << "No solution";
        return;
    }
    B /= A;
    bool neg = B < 0;
    if (neg && n % 2 == 0) {
        cout << "No solution";
        return;
    }
    if (neg) B = - B;
    for (int x = 0; x <= B; x++) {
        if (pow(x, n) == B) {
            cout << (neg? - x : x);
            return;
        }
    }
    cout << "No solution";
}

int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        cout << "Case #" << i + 1 << ": ";
        codeforces_30_A a;
        a.solve(cin);
        cout << endl;
    }
    return 0;
}