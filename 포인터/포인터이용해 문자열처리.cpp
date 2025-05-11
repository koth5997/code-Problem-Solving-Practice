#include<iostream>

int main()
{
	int i;
	char string[20] = "Dreams come true", string2[20], * ptr1, * ptr2;
	ptr1 = string;
	std::cout << "\nstring의 주소=" << &string << "\t ptr1=" << &ptr1;
	std::cout << "\nstring =" << string << "\n ptr1=" << ptr1;
	std::cout << "\n\n" << ptr1 + 7;
	ptr2 = &string[7];
	std::cout << "\n" << ptr2 << "\n\n";

	for (i = 16; i >= 0; i--)
	{
		putchar(*(ptr1 + i));
	}
	for (i = 0; i < 20; i++)
	{
		string2[i] = *(ptr1 + i);
	}
	std::cout << "\n\n" << "string =" << string;
	std::cout << "\n string2 =" << string2;

	*ptr1 = 'P';
	*(ptr1 + 1) = 'e';
	*(ptr1 + 2) = 'a';
	*(ptr1 + 3) = 'c';
	*(ptr1 + 4) = 'e';
	std::cout << "\n\n" << "string =" << string;
	return 0;
}