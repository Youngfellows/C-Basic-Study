#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define AMOUNT 2
#define LEN 20

struct student
{
	int id;
	char name[LEN];
	char sex[LEN];
	double score;
};

int main()
{
		struct student stu;
		struct student *p;
		p = &stu;

		//通过指针为结构体变量赋值
		p->id = 101;
		strcpy(p->name,"秋婷");
		strcpy(p->sex,"女");
		p->score = 89.5;
		printf("%d\t %s\t %s\t %.2lf\n",p->id,p->name,p->sex,p->score);
		return 0;
}
