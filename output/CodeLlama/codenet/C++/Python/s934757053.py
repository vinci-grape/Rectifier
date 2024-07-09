#include <iostream>
using namespace std;

int main(){
    int A, B;
    int ans=0;
    int out = 1;
    cin >> A >> B;

    while(out<B){
        out--;
        out += A;
        ans++;
    }
    cout << ans << endl;
    return 0;
}