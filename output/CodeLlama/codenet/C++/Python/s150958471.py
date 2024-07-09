#include <iostream>
#include <queue>

using namespace std;

int main(){
	int train[2];
	int bus[2];

	cin>>train[0]>>train[1];
	cin>>bus[0]>>bus[1];

	cout<<(train[0]<train[1]?train[0]:train[1])+(bus[0]<bus[1]?bus[0]:bus[1])
		<<endl;

	return 0;
}