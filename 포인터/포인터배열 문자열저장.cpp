#include <iostream>
using namespace std;

int main()
{
	int i;
	const char* ptrArray[4] = { "한국", "서울", "목포", "93번지 2/3" };

	for (i = 0; i < 4; i++)
	{
		cout << "\n" << ptrArray[i];
	}

	ptrArray[2] = "부산";

	cout << "\n\n";

	for (i = 0; i < 4; i++)
	{
		cout << "\n" << ptrArray[i];
	}

	return 0;
}
