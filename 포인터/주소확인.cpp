#include<iostream>

int main()
{
	/*
	int i, sale[4] = { 159, 209, 251, 312 };

	for (i = 0; i < 4; i++)
	{
		std::cout << "\n address :" << &sale[i] << "sale[" << i << "] = " << sale[i];
	}
	return 0;
*/
	int i, n = 0, * ptr;
	int sale[2][4] = { {63, 85, 23, 134}, {159, 323, 251, 312} };

	ptr = &sale[0][0];
	for (i = 0; i < 8; i++)
	{
		std::cout << "\n address : " << ptr << "sale" << i << " = " << *ptr;
		ptr++;
	}
	return 0;

}
