#include <iostream>

int main()
{
	int array[2][3][4];
	int i, j, k, value = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				array[i][j][k] = value;
				std::cout << "array[" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << std::endl;
				value++;
			}
		}

	}
	return 0;
}