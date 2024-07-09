#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int sqrt = (int) sqrt(n);
    int answer = 0;
    
    for (int i = 2; i <= sqrt; i++) {
        int count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        
        for (int j = 1; count - j >= 0; j++) {
            count -= j;
            answer++;
        }
    }
    
    if (n > 1) {
        answer++;
    }
    
    cout << answer << endl;

}