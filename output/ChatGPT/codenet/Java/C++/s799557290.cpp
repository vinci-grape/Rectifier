#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    vector<bool> ju(100001, false);
    vector<int> pe(100001, 0);
    int wa = 0;
    int ac = 0;
    
    for(int i=0; i<b; i++){
        int n;
        string res;
        cin >> n >> res;
        
        if(res == "WA" && ju[n-1] != true){
            pe[n-1]++;
        }
        
        if(res == "AC"){
            ju[n-1] = true;
        }
    }
    
    for(int i=0; i<a ; i++){
        if(ju[i]){
            ac++;
            wa += pe[i];
        }
    }
    
    cout << ac << " " << wa << endl;

}