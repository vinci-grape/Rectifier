#include <iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  if(a==b)
    cout<<"Draw";
  else if(a==1)
    cout<<"Alice";
  else if(b==1)
    cout<<"Bob";
  else if(a>b)
    cout<<"Alice";
  else
    cout<<"Bob";
  return 0;
}