#include<bits/stdc++.h>
using namespace std;

class UnionFind{
	int Parent[];
	UnionFind(int n){//Initialize by -1
		Parent=new int[n];
		for(int i=0;i<n;i++)Parent[i]=-1;
	}
	int root(int A) {//In which tree is A?
		if(Parent[A]<0)return A;
		return Parent[A]=root(Parent[A]);
	}
	int size(int A) {//size of tree which is include A
		return -Parent[root(A)];
	}
	bool connect(int A,int B) {//Connect A and B
		A=root(A);
		B=root(B);
		if(A==B) return false;
		if(size(A)<size(B)) {int C=0;C=B;B=A;A=C;}//SWAP
		Parent[A]+=Parent[B];
		Parent[B]=A;
		return true;
	}
};

int main() {
	string str;
	cin>>str;
	if(str[2]==str[3]&&str[4]==str[5])cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}