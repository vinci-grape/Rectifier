#include <iostream>
#include <string>
#include <map>
#include <string.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int ura=0,opa=0;
    map<char,int> tmap;
    for(int i=0;i<t.size();i++){
        char ch=t[i];
        if(!tmap.count(ch))
            tmap[ch]=1;
        else
            tmap[ch]++;
    }
    int length=s.size();
    for(int i=0;i<length;i++){
        char ch=s[i];
        int num=tmap[ch];
        if(num==1){
            tmap.erase(ch);
            ura++;
        }
        else{
            tmap[ch]-=1;
            opa++;
        }
    }
    cout<<ura<<" "<<opa<<endl;
    return 0;
}