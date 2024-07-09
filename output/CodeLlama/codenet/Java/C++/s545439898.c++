#include <iostream>
using namespace std;

int main() {
	
	int count;
	cin >> count;
	int givingNumbers[count];
	
	// Read Numbers
	for(int i = 0; i< count;i++){
		
		cin >> givingNumbers[i];
		
	}
	
	// Reversing Numbers
	for(int i = count-1; 0 <= i;i--){
		
		cout << givingNumbers[i];
		
		if(i > 0){
			cout << " ";
		}
		
		
	}
	
	cout << endl;
	
	return 0;
}