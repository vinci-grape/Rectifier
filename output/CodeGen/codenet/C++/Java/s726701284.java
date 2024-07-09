#include<iostream> 
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
int main()
{
	string s;
	cin >> s;
	for (char i = 'a'; i <= 'z'; i++)
	{
		int a = 0;
		for (int j = 0; j < s.size();j++)
		{
			if (i==s.at(j))
			{
				a++;
			}
		}
		if (a==0)
		{
			cout << i << endl;
			break;
		} 
		if (i=='z')
		{
			cout << "None" << endl;
			break;
		}
	}
}