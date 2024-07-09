#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 368;
    vector<int> m(N, 0);
    vector<int> f(N, 0);
    
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++){
        char x;
        int a, b;
        cin >> x >> a >> b;
        
        if (x == 'M'){
            m[a] += 2;
            m[b] -= 2;
        }
        else {
            f[a] += 2;
            f[b] -= 2;
        }
    }
    
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < N; i++){
        a += m[i];
        b += f[i];
        if (min(a, b) > c){
            c = min(a, b);
        }
    }
    
    cout << c << endl;
    
    return 0;
}