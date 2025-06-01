#include <iostream>
#include "stackS.h"

int main(void) {
	element item;
	std::cout << "\n 순차 스택 연산 \n";
	printStack();
	push(1); printStack();
	push(2); printStack();
	push(3); printStack();

	item = peek(); printStack();
	std::cout << "peek =>" << item << std::endl;

	item = pop(); printStack();
	std::cout << "pop =>" << item << std::endl;

	item = pop(); printStack();
	std::cout << "pop =>" << item << std::endl;

	item = pop(); printStack();
	std::cout << "pop =>" << item << std::endl;

	return 0;
}