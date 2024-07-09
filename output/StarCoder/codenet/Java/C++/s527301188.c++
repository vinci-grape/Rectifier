#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string str;
	vector<int> nums;
	int top = 0;
	while (getline(cin, str)) {
		switch (str.at(0)) {
		case '+':
			top--;
			nums[top-1] = nums[top - 1] + nums[top];
			break;
		case '-':
			top--;
			nums[top-1] = nums[top - 1] - nums[top];
			break;
		case '*':
			top--;
			nums[top-1] = nums[top - 1] * nums[top];
			break;
		default:
			nums.push_back(stoi(str));
			top++;
			break;
		}
	}
	cout << nums[0] << endl;
	return 0;
}