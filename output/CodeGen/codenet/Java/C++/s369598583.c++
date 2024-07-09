#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count = 0;
    int next = 10;
    for(int i = 1; i <= N; i++){
        count++;
        if(i == next - 1){
            i = next * 10 - 1;
            next *= 100;
        }
    }
    cout << count << endl;
    return 0;
}