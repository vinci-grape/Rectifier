#include<bits/stdc++.h>
using namespace std;
int main()
{
int N,K;
cin>>N>>K;
int score[N];
for(int i=0;i<N;i++)
cin>>score[i];
for(int i=0;i<N-K;i++)
{
int mae=i,usiro=i+K;
if(score[mae]<score[usiro])
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
return 0;
}