#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30
#define LEN 3

struct Student
{
		long number;//学号
		char *name;//姓名
		char *sex;//性别
		float score;//分数
};

int main()
{
		struct Student stu,stu1;
		struct Student *p,*p1;
		p = &stu;//结构体指针变量p,指向了结构体变量stu的内存地址
		p1 = &stu1;

		//赋值
		p->number = 1001;
		//strcpy(stu.name,"杨过");
		//strcpy(stu.sex,"男");
		p->name = "杨过";
		p->sex = "男";
		p->score = 88.5;

		p1->number = 1002;
		p1->name = "小龙女";
		p1->sex = "女";
		p1->score = 99.5;

		//获取值
		printf("学号\t姓名\t性别\t分数\n");
		printf("%ld\t%s\t%s\t%.2f\n",stu.number,stu.name,stu.sex,stu.score);
		printf("%ld\t%s\t%s\t%.2f\n",(*p).number,(*p).name,(*p).sex,(*p).score);
		printf("%ld\t%s\t%s\t%.2f\n",p->number,p->name,p->sex,p->score);
		printf("%ld\t%s\t%s\t%.2f\n",p1->number,p1->name,p1->sex,p1->score);

		return 0;
}

