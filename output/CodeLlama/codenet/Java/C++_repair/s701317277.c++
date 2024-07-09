#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    int minVal = INT_MAX;
    int count = 0;
    long sum = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] < 0)
            count++;
        minVal = min(minVal, abs(A[i]));
        sum += abs(A[i]);
    }

    if(count%2 == 0)
        cout << sum << endl;
    else {
        cout << sum-minVal*2 << endl;
    }
    return 0;
}