#include<stdio.h>
#include<stdlib.h>

#define SIZE 30

struct Student
{
		int number;
		char name[SIZE];
		float score;
};

int main()
{
		struct Student stu1;
		struct Student stu2;
		printf("请输入stu1的信息:\n");
		printf("学号 姓名 成绩\n");
		scanf("%d %s %f",&stu1.number,stu1.name,&stu1.score);

		printf("请输入stu2的信息:\n");
		printf("学号 姓名 成绩\n");
		scanf("%d %s %f",&stu2.number,stu2.name,&stu2.score);

		printf("较高分数的学生信息是:\n");
		printf("学号 姓名 成绩\n");
		if(stu1.score > stu2.score)
		{
				printf("%d %s %.2f\n",stu1.number,stu1.name,stu1.score);
		}else if(stu1.score < stu2.score)
		{
				printf("%d %s %.2f\n",stu2.number,stu2.name,stu2.score);
		}else
		{
				printf("%d %s %.2f\n",stu1.number,stu1.name,stu1.score);
				printf("%d %s %.2f\n",stu2.number,stu2.name,stu2.score);
		}


		return 0;
}
