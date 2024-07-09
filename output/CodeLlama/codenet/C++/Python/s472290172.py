#include <iostream>                                                                                                                               
#include <map>                                                                                                                                    
using namespace std;                                                                                                                              
                                                                                                                                                  
int main() {                                                                                                                                      
    string str;                                                                                                                                   
    cin >> str;                                                                                                                                   
                                                                                                                                                  
    int max = 0, cnt = 0;                                                                                                                         
    for (auto sc : str) {                                                                                                                         
        if (sc == 'A' || sc == 'C' || sc == 'G' || sc == 'T') {                                                                                   
            cnt++;                                                                                                                                
        } else {                                                                                                                                  
            cnt = 0;                                                                                                                              
        }                                                                                                                                         
        max = max < cnt ? cnt : max;                                                                                                              
    }                                                                                                                                             
                                                                                                                                                  
    cout << max << endl;                                                                                                                          
}