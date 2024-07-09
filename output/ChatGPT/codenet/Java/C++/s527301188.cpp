#include <iostream>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    stringstream ss(input);
    
    stack<int> nums;
    int num;
    char op;
    
    while (ss >> num || ss >> op) {
        if (op == '+') {
            int operand = nums.top();
            nums.pop();
            nums.top() += operand;
        } else if (op == '-') {
            int operand = nums.top();
            nums.pop();
            nums.top() -= operand;
        } else if (op == '*') {
            int operand = nums.top();
            nums.pop();
            nums.top() *= operand;
        } else {
            nums.push(num);
        }
    }
    
    cout << nums.top() << endl;
    
    return 0;
}