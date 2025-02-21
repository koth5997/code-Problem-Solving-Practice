#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N;
	float sum = 0;
	float max = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		sum += num;
		
		if (num > max)
		{
			max = num;
		}
		
	}
	float avg = (sum / max * 100) / N;

	cout << avg << endl;
}