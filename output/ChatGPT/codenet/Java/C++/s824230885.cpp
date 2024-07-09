#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> list(N);
    for(int i = 0; i < N; i++){
        cin >> list[i];
    }
    int max = 0;
    int output = 0;
    for(int i = 0; i < N; i++){
        if(max <= list[i]){
            max = list[i];
            output++;
        }
    }
    cout << output << endl;
    return 0;
}