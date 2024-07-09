#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int w, a, b;
    cin >> w >> a >> b;
    
    int answer = max(a, b) - min(a, b) - w;
    if(answer < 0){
        cout << 0 << endl;
    }else{
        cout << answer << endl;
    }
    
    
    return 0;
}