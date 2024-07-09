#include <iostream>
#include <cstdlib>
using namespace std;

class Main{
    public:
	int A;
	int B;
	int C;
	int main(){
	    cin >> A >> B >> C;
	    if ( A == B && B == C && C == A ) cout << "Yes";
	    else cout << "No";
	    return 0;
	}
}