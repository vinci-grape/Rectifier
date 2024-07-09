#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> list(n);
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    sort(list.begin(), list.end());
    int c = 1;
    for(int i = 0; i < n; i++){
        if(list[i] >= c){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}