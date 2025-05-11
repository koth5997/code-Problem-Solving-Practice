#include<iostream>

int main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++)
	{
		std::cout << "학생" << i + 1 << "의 이름:";
		gets_s(student[i][0]);
		std::cout << "학생" << i + 1 << "의 학과:";
		gets_s(student[i][1]);
		std::cout << "학생" << i + 1 << "의 학번:";
		gets_s(student[i][2]);
	}
	for (i = 0; i < 2; i++)
	{
		std::cout << "\n\n" << "학생" << i + 1;
		for (j = 0; j < 3; j++)
		{
			std::cout << "\n\t";
			for (k = 0; student[i][j][k] != '\0'; k++)
			{
				std::cout << student[i][j][k];
			}
		}
	}
	return 0;
}