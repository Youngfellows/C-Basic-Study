#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 30

struct Student
{
		long number;
		char name[SIZE];
		float score;
		struct Student *next;//指向下一个节点
};

int main()
{
		struct Student stu1,stu2,stu3;
		struct Student *head;//头节点
		struct Student *p;//指针

		//赋值
		stu1.number = 10011;
		strcpy(stu1.name,"杨过");
		stu1.score = 99.5;

		stu2.number = 10012;
		strcpy(stu2.name,"小龙女");
		stu2.score = 77.5;
		
		stu3.number = 10013;
		strcpy(stu3.name,"赵敏");
		stu3.score = 88.5;

		//构建链表
		head = &stu1;
		stu1.next = &stu2;
		stu2.next = &stu3;
		stu3.next = NULL;
		
		p = head;//指针指向头结点

		//打印链表
		printf("学号\t姓名\t分数\n");
		do
		{
				printf("%ld\t%s\t%.2f\n",p->number,p->name,p->score);
				p = p->next;//移动指针
		}while(p != NULL);


		return 0;
}

