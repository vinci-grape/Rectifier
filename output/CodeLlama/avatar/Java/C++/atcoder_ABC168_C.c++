#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int A, B, H, M;
    cin >> A >> B >> H >> M;
    double AA = A;
    double BB = B;
    double HH = H;
    double MM = M;
    double ans2;
    double kaku;
    double mkaku;
    double hkaku;
    double AA2;
    double BB2;
    double CC;
    double DD;
    mkaku = MM * 6;
    hkaku = HH * 30 + (double)M / 2;
    kaku = mkaku - hkaku;
    kaku = abs(kaku);
    kaku = kaku * 3.14159265358979323846 / 180;
    AA2 = AA * AA;
    BB2 = BB * BB;
    CC = AA2 + BB2;
    DD = cos(kaku) * 2 * AA * BB;
    ans2 = CC - DD;
    cout << sqrt(ans2) << endl;
}