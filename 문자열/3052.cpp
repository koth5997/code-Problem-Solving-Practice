#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	int num, rem[42] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		rem[num % 42] = 1;
	}
	for (int j = 0; j < 42; j++)
	{
		if (rem[j] == 1)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}

