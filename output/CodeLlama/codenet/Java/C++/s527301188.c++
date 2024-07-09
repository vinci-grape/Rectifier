#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	vector<int> nums;
	vector<int> result;
	int top = 0;
	getline(cin, str);
	stringstream ss(str);
	string temp;
	while (ss >> temp)
	{
		switch (temp[0])
		{
		case '+':
			top--;
			nums[top - 1] = nums[top - 1] + nums[top];
			break;
		case '-':
			top--;
			nums[top - 1] = nums[top - 1] - nums[top];
			break;
		case '*':
			top--;
			nums[top - 1] = nums[top - 1] * nums[top];
			break;
		default:
			nums.push_back(atoi(temp.c_str()));
			top++;
			break;
		}
	}
	cout << nums[0] << endl;
	return 0;
}