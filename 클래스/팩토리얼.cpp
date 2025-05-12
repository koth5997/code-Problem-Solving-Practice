#include<iostream>

long int fact(int);

void main()
{

	int n, result=0;
	std::cout << "\n정수를 입력하시오:";
	std::cin >> n;
	result = fact(n);
	std::cout << "\n\n" << n << "의 팩토리얼 값은?" << result;
}
long int fact(int n)
{
	int value;
	if (n <= 1)
	{
		std::cout << "\n fact(1) 함수호출";
		std::cout << "\n fact(1)값 1 반환";
		return 1;
	}
	else
	{
		std::cout << "\n fact(" << n << ") 함수 호출";
		value = (n * fact(n - 1));
		std::cout << "\n fact(" << n << ")값" <<  value << "반환";
		return value;
	}
	}
