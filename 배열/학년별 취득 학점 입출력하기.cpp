#include<iostream>

int main()
{
	int i;
	int score[3] = { 91, 86, 71 };
	char grade[3] = { 'A', 'B', 'A' };

	std::cout << " 학년별 취득학점";
	for (i = 0; i < 3; i++)
	{
		std::cout << "\n" << i + 1 << "학년 : " << score[i] << "점 " << grade[i] << "반";
	}
	return 0;
}