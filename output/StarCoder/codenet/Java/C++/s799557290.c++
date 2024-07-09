#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    bool ju[100001];
    int pe[100001];
    int wa=0;
    int ac=0;
    
    for(int i=0; i<b; i++){
        int n;
        cin>>n;
        string res;
        cin>>res;
        
        if(res.compare("WA") == 0 && ju[n-1]!= true){
            pe[n-1]++;
        }
        
        if(res.compare("AC") == 0){
            ju[n-1] = true;
        }
    }
    
    for(int i=0; i<a ; i++){
        if(ju[i]){
            ac++;
            wa += pe[i];
        }
    }
    
    cout<<ac<<" "<<wa;
    return 0;
}