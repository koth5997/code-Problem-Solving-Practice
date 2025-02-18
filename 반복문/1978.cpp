#include <iostream>
using namespace std;

int main()
{
	int num, ber;
	int count = 0;

	cin >> ber;

	for (int i = 0; i < ber; i++)
	{
		cin >> num;
		
		if (num < 2) continue;

		bool sosu = true;
		for (int j=2; j * j <= num; j++ )
		{
			if (num % j == 0)
			{
				sosu = false;
				break;
			}
		}
		if (sosu) count++;
	}
	cout << count<< endl;
	return 0;

}