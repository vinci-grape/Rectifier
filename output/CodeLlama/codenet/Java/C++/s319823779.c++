#include<iostream>
using namespace std;

int main()
{
	int a,b,c,x,i,j,k,total,res=0;
	cin>>a>>b>>c>>x;
	
	for(i=0 ; i<=a ; i++){
		for(j=0 ; j<=b ; j++){
			for(k=0 ; k<=c ; k++){
				total = 500*i + 100*j + 50*k;
				
				if( total==x ){
					res++;
				}
			}
		}
	}
	cout<<res;
}