#include<iostream>
using namespace std;

int main()
{
	int i, j,k, num;

	cin >> num;

	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < num-i; j++)
		{
			cout << " ";
		}

		for (k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;

}