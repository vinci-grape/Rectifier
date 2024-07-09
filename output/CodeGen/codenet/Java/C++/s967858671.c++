#include <iostream>
using namespace std;
int main()
{
	int Num[11];
	int i;
	for (i = 0; i < 10; i++)
	{
		cin >> Num[i];
	}
	for (i = 9; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (Num[j] < Num[j + 1])
			{
				Num[10] = Num[j];
				Num[j] = Num[j + 1];
				Num[j + 1] = Num[10];
			}
		}
	}
	cout << Num[0] << endl;
	cout << Num[1] << endl;
	cout << Num[2] << endl;
	return 0;
}