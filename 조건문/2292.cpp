#include<iostream>

using namespace std;

int main()
{
	long long N;
	cin >> N;

	if (N == 1)
	{
		cout << 1 << endl;
		return 0;
	}

	long long layer = 1, range = 1;
	while(range < N)
	{
		range += 6 * layer;
		layer++;
	}
	cout << layer << endl;
	return  0;
}
