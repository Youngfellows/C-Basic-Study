#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30
#define LEN 3

struct Student
{
		long number;
		char name[SIZE];
		char sex;
		float score;
};

int main()
{
		struct Student stu;
		struct Student *p;
		p = &stu;

		//赋值
		stu.number = 1001;
		strcpy(stu.name,"杨过");
		stu.sex = 'M';
		stu.score = 88.5;

		//获取值
		printf("学号\t姓名\t性别\t分数\n");
		printf("%ld\t%s\t%c\t%.2f\n",stu.number,stu.name,stu.sex,stu.score);
		printf("%ld\t%s\t%c\t%.2f\n",(*p).number,(*p).name,(*p).sex,(*p).score);
		printf("%ld\t%s\t%c\t%.2f\n",p->number,p->name,p->sex,p->score);

		return 0;
}

