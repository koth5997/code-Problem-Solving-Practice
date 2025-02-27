#include <iostream>

using namespace std;


int factorial(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
int ehang(int N, int K)
{
	return factorial(N) / (factorial(K) * factorial(N - K));
}
int main()
{
	int N, K;
	cin >> N >> K;
	cout << ehang(N, K) << endl;
	return 0;
}