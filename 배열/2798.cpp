#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N=0, M=0, num=0;
	cin >> N >> M;

	vector<int> cards(N);
	for (int i = 0; i < N; i++)
	{	
		cin >> cards[i];
	}
	int max_sum = 0;
	for (int j = 0; j < N - 2; j++)
	{
		for (int k = j + 1; k < N - 1; k++)
		{
			for (int l = k + 1; l < N; l++)
			{
				int sum = cards[j] + cards[k] + cards[l];

				if (sum <= M && sum > max_sum)
				{
					max_sum = sum;
				}
			}
		}
	}
	cout << max_sum << endl;
	return 0;
	
}