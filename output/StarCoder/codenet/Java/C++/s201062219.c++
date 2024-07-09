#include <iostream>
using namespace std;
int main()
{
int c,b,a[100000];
char mark;
int x=0;
do{
cin>>c>>mark>>b;
if(mark=='?'){
a[x]=2000001;
break;
}
else if(mark=='+'){
a[x]=c+b;
}
else if(mark=='-'){
a[x]=c-b;
}
else if(mark=='*'){
a[x]=c*b;
}
else if(mark=='/'){
a[x]=c/b;
}
x++;
}while(true);
x=0;
do{
if(a[x]==2000001)break;
cout<<a[x]<<endl;
x++;
}while(true);
return 0;
}