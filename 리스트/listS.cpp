#include<iostream>
#include<iomanip>
#include "listS.h"
int insertElement(int L[], int n, int x)
{
	int i, k = 0, move = 0;
	for (i = 0; i < n; i++)
	{
		if (L[i] <= x && x <= L[i + 1])
		{
			k = i + 1;
			break;
		}
	}
	if (i == n)
		k = n;
	for (i = n; i > k; i--)
	{
		L[i] = L[i - 1];
		move++;
	}
	L[k] = x;
	return move;
}
int deleteElement(int L[], int n, int x)
{
	int i, k = 0, move = 0;
	for (i = 0; i < n; i++)
	{
		if (L[i] == x)
		{
			k = i;
			break;
		}
	}
	if (i == n)
		move = n;
	for (i = k; i < n - 1; i++)
	{
		L[i] = L[i + 1];
		move++;
	}
	return move;
}

int main()
{
	int list[MAX] = { 10, 20, 30, 40, 50, 60 , 70 };
	int i, move, size = 6;
	std::cout << "\n삽입 전 선형 리스트:";
	for (i = 0; i < size; i++)
	{
		std::cout << std::setw(3) << list[i] << std::endl;
	}
	std::cout << "\n원소의 갯수: " << size;
	move = insertElement(list, size, 30);
	std::cout << "\n삽입 후 선형 리스트:";
	for (i = 0; i <= size; i++)
	{
		std::cout << std::setw(3) << list[i] << std::endl;
	}
	std::cout << "\n 원소의 갯수: " << ++size;
	std::cout << "\n 이동한 원소의 갯수: \n" << move;

	move = deleteElement(list, size, 30);
	if (move == size)
		std::cout << "\n 선형 리스트에 원소가 없어서 삭제할 수 없습니다.\n";
	else
	{
		std::cout << "\n 삭제 후 선형 리스트:";
		for (i = 0; i < size - 1; i++)
		{
			std::cout << std::setw(3) << list[i] << std::endl;
		}
		std::cout << "\n 원소의 갯수: " << --size;
		std::cout << "\n 이동한 원소의 갯수: \n" << move;
	}
	return 0;
}