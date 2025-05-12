#include <iostream>
#include <cstring>

struct employee
{
	char name[10];
	int year;
	int pay;
};

int main()
{
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy_s(Sptr->name, "이순신");
	Sptr->year = 2023;
	Sptr->pay = 6000;

	std::cout << "\n 이름 :" << Sptr->name;
	std::cout << "\n 입사 :" << Sptr->year;
	std::cout << "\n 연봉 :" << Sptr->pay;

	return 0;
}