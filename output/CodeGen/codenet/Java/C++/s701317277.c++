#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int min = INT_MAX;
    int count = 0;
    long sum = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        if(A[i] < 0)
            count++;
        min = min < abs(A[i])? min : abs(A[i]);
        sum += abs(A[i]);
    }
    if(count%2 == 0)
        cout << sum;
    else {
        cout << sum - min*2;
    }
    return 0;
}