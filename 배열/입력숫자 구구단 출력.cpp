#include <iostream>

int main()
{
	int n, i = 0;
	int gugu[9];
	std::cout << "몇단?";
	while (1)
	{
		std::cin >> n;
		if (n < 0 || n > 9)
		{
			std::cout << "1~9까지 다시입력";
		}
		else
			break;
	}
	std::cout << " \n";
	for (i = 0; i < 9; i++)
	{
		gugu[i] = n * (i + 1);
		std::cout << n << " * " << i + 1 << "= " << gugu[i] << "\n";
	}
	return 0;
}