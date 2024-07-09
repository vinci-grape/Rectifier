#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
	string str;
	cin >> str;
	int nums[100];
	int top = 0;
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
		case '+':
			top--;
			nums[top] = nums[top] + nums[top + 1];
			break;
		case '-':
			top--;
			nums[top] = nums[top] - nums[top + 1];
			break;
		case '*':
			top--;
			nums[top] = nums[top] * nums[top + 1];
			break;
		default:
			nums[top] = atoi(str.substr(i, 1).c_str());
			top++;
			break;
		}
	}
	cout << nums[0] << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
	string str;
	cin >> str;
	int nums[100];
	int top = 0;
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
		case '+':
			top--;
			nums[top] = nums[top] + nums[top + 1];
			break;
		case '-':
			top--;
			nums[top] = nums[top] - nums[top + 1];
			break;
		case '*':
			top--;
			nums[top] = nums[top] * nums[top + 1];
			break;
		default:
			nums[top] = atoi(str.substr(i, 1).c_str());
			top++;
			break;
		}
	}
	cout << nums[0] << endl;
	return 0;
}