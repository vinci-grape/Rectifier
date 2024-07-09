#include <iostream>
#include <array>
#include <vector>
#include <iomanip>
#include <string>
#include <cmath>
#include <array>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

typedef  pair<int,int> P;

     bool d[10]={0};
     int n,k;
     bool hantei=true;




int main(){
      cin>>n>>k;
     for(int i=0;i<k;++i){
          int a;
          cin>>a;
          d[a]=1;
     }
     while(1):
          int x=n;
          hantei=1;
          while(x):
               if(d[x%10]):
                    hantei=0;
                    break;
               x/=10;
          if(hantei):
               cout<<n<<endl;
               break;
          n++;
     }
}