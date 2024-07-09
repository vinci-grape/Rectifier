#include<iostream>
using namespace std;
int main(){
  char B,OUT;
  cin >> B;
  if(B == 'A')OUT = 'T';
  else if(B =='T')OUT = 'A';
  else if(B =='C')OUT = 'G';
  else OUT = 'C';
  cout << OUT << endl;
}