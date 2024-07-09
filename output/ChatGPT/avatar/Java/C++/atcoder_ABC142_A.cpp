#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    try {
        double input;
        cin >> input;
        
        double countOdd = round(input / 2);
        double result = countOdd / input;
        
        cout << fixed << setprecision(10) << result << endl;
    } catch (const exception& e) {
        cerr << e.what() << endl;
        return 1;
    }
    
    return 0;
}