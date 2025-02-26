#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> count(10001, 0);

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		count[num]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		while (count[i]--)
		{
			cout << i << "\n";
		}
	}
	return 0;
}