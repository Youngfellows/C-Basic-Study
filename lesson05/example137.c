#include<stdio.h>

char ranking(int rank);

int main()
{
		float score;//成绩
		char grade;//排名
		int rank;//等级
		printf("请输入成绩:");
		scanf("%f",&score);
		while(score > 100 || score < 0)
		{
			printf("输入有误,请从新输入:");
			scanf("%f",&score);
		}
		rank = score / 10;
		grade = ranking(rank);
		printf("排名是:%c\n",grade);
		return 0;
}

/**
 * @brief 根据等级排名
 * 
 * @param rank 等级
 * @return char 排名
 */
char ranking(int rank)
{
	char grade;
	switch(rank)
	{
			case 10:
			case 9:
					grade = 'A';
					break;
			case 8:
					grade = 'B';
					break;
			case 7:
					grade = 'C';
					break;
			case 6:
					grade = 'D';
					break;
			default:
					grade = 'E';
					break;
	}
	return grade;
}
