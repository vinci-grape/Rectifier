#!/usr/bin/python
# -*- coding: utf-8 -*-

# Author: Zeyuan Shang
# Date: 2016/01/04

# Implement a basic calculator to evaluate a simple expression string.
# The expression string contains only non-negative integers, +, -, *, /
# operators and empty spaces. The integer division should truncate toward zero.
# You may assume that the given expression is always valid.
# Some examples:
# "3+2*2" = 7
# " 3/2 " = 1
# " 3+5 / 2 " = 5
# Note: Do not use the eval built-in library function.

# score:100(0ms)
class Solution {
    public:
        int calculate(string s) {
            stack<int> stk;
            int res = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] =='') continue;
                if(s[i] >= '0' && s[i] <= '9') {
                    int num = s[i] - '0';
                    while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                        num = num * 10 + s[i] - '0';
                        i++;
                    }
                    stk.push(num);
                } else {
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    if(s[i] == '+') res += num1 + num2;
                    else if(s[i] == '-') res += num1 - num2;
                    else if(s[i] == '*') res += num1 * num2;
                    else if(s[i] == '/') res += num1 / num2;
                }
            }
            return res;
        }
};

# score:100(0ms)
class Solution {
    public:
        int calculate(string s) {
            stack<int> stk;
            int res = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] =='') continue;
                if(s[i] >= '0' && s[i] <= '9') {
                    int num = s[i] - '0';
                    while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                        num = num * 10 + s[i] - '0';
                        i++;
                    }
                    stk.push(num);
                } else {
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    if(s[i] == '+') res += num1 + num2;
                    else if(s[i] == '-') res += num1 - num2;
                    else if(s[i] == '*') res += num1 * num2;
                    else if(s[i] == '/') res += num1 / num2;
                }
            }
            return res;
        }
};

# score:100(0ms)
class Solution {
    public:
        int calculate(string s) {
            stack<int> stk;
            int res = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] =='') continue;
                if(s[i] >= '0' && s[i] <= '9') {
                    int num = s[i] - '0';
                    while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                        num = num * 10 + s[i] - '0';
                        i++;
                    }
                    stk.push(num);
                } else {
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    if(s[i] == '+') res += num1 + num2;
                    else if(s[i] == '-') res += num1 - num2;
                    else if(s[i] == '*') res += num1 * num2;
                    else if(s[i] == '/') res += num1 / num2;
                }
            }
            return res;
        }
};

# score:100(0ms)
class Solution {
    public:
        int calculate(string s) {
            stack<int> stk;
            int res = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] =='') continue;
                if(s[i] >= '0' && s[i] <= '9') {
                    int num = s[i] - '0';
                    while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
                        num = num * 10 + s[i] - '0';
                        i++;
                    }
                    stk.push(num);
                } else {
                    int num1 = stk.top();
                    stk.pop();
                    int num2 = stk.top();
                    stk.pop();
                    if(s[i] == '+') res += num1 + num2;
                    else if(s[i] == '-') res += num1 - num2;
                    else if(s[i] == '*') res += num1 * num2;
                    else if(s[i] == '/') res += num1 / num2;
                }
            }
            return res;
        }
};

# score:100(0ms)
class Solution {
    public:
        int calculate(string s) {
            stack<int> stk;
            int res = 0;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] =='') continue;
                if(s[i] >= '0' && s[i] <= '9') {
                    int num = s[i] - '0';
                    while(i < s.size() && s[i