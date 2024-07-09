#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cassert>
using namespace std;

class InputIterator{
	vector<string> inputLine;
	int index; int max; string read;
	InputIterator(){
		cin >> read;
		inputLine.push_back(read);
		while(cin >> read){
			inputLine.push_back(read);
		}
		max = inputLine.size();
	}
	bool hasNext(){return (index < max);}
	string next(){
		if(hasNext()){
			return inputLine[index++];
		}else{
			throw new IndexOutOfBoundsException("There is no more input");
		}
	}
};

class HashMap{
	int size;
	vector<string> key;
	vector<int> value;
	HashMap(){
		size = 0;
	}
	void insert(string key, int value){
		this->key.push_back(key);
		this->value.push_back(value);
		size++;
	}
	int get(string key){
		for(int i = 0; i < size; i++){
			if(key == key[i]){
				return value[i];
			}
		}
		return -1;
	}
};

class ArrayList{
	int size;
	vector<int> value;
	ArrayList(){
		size = 0;
	}
	void insert(int value){
		this->value.push_back(value);
		size++;
	}
	int get(int index){
		return value[index];
	}
};

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }else{
                count = 0;
            }
            if(count > max){
                max = count;
            }
        }
        return max;
    }
};

int main(){
	//	freopen("in","r",stdin);
	//	freopen("out","w",stdout);
	int T = 0;
	cin >> T;
	for(int i = 0; i < T; i++){
		int N = 0;
		cin >> N;
		vector<int> nums(N);
		for(int j = 0; j < N; j++){
			cin >> nums[j];
		}
		Solution sol;
		int max = sol.findMaxConsecutiveOnes(nums);
		cout << max << endl;
	}
	return 0;
}