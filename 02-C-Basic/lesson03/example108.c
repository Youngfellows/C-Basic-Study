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
		//指向结构体数组的指针
		struct Student stu[LEN] = 
		{{10010,"张无忌",'M',89.5},{10011,"赵敏",'F',99.0},{10012,"周芷若",'F',88.0}};
		struct Student *p;
		int i;
		p = stu;//结构体指针变量p,指向结构体数组的首元素
		printf("学号\t姓名\t性别\t分数\n");
		for(i=0;i<LEN;i++,p++)
		{
				printf("%ld\t%s\t%c\t%.2f\n",stu[i].number,stu[i].name,stu[i].sex,stu[i].score);
				printf("%ld\t%s\t%c\t%.2f\n",(*p).number,(*p).name,(*p).sex,(*p).score);
				printf("%ld\t%s\t%c\t%.2f\n",p->number,p->name,p->sex,p->score);
		}
		return 0;
}

