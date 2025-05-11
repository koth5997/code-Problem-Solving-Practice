#include <iostream>

void main()
{
	int i = 10, j = 20;
	int* ptr;
	std::cout << "\n i의 값=" << i << "\n j의 값 =" << j;
	std::cout << "\n i의 주소=" << &i << "\n j의 주소 =" << &j;

	ptr = &i;
	std::cout << "\n prt 메모리 주소(&ptr) =" << &ptr;
	std::cout << "\n prt 메모리 값(ptr) =" << ptr;
	std::cout << "\n prt 메모리 참조값(*ptr) =" << *ptr;

	ptr =&j;
	std::cout << "\n prt 메모리 주소(&ptr) =" << &ptr;
	std::cout << "\n prt 메모리 값(ptr) =" << ptr;
	std::cout << "\n prt 메모리 참조값(*ptr) =" << *ptr;

	i = *ptr;
	std::cout << "\n <<i=*ptr실행>>";
	std::cout << "\n i의 값=" << i;

}