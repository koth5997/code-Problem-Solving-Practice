#include <iostream>


struct employee
{
	char name[10];
	int year;
	int pay;
};
int main()
{
	int i;
	struct employee Lee[4]
	{
		{"이진호", 2022, 5200},
		{"이한영", 2023, 4300},
		{"이상원", 2023, 4800},
		{"홍길동", 2024, 3900}
	};
	for (i = 0; i < 4; i++)
	{
		std::cout << "\n\n 이름 :" << Lee[i].name;
		std::cout << "\n\n 입사 :" << Lee[i].year;
		std::cout << "\n\n 연봉 :" << Lee[i].pay;
	}
	return 0;
}