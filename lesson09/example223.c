#include<stdio.h>

struct Student
{
		int number;//学号
		float score;//分数
		struct Student *next;//下一个节点
};

int main()
{
		struct Student stu1,stu2,stu3;//3个节点
		struct Student *head;//头结点
		struct Student *p;//移动指针
		stu1.number = 1001;
		stu1.score = 89.5;
		stu2.number = 1002;
		stu2.score = 99.5;
		stu3.number = 1003;
		stu3.score = 78.5;

		//构建静态链表
		head = &stu1;
		stu1.next = &stu2;
		stu2.next = &stu3;
		stu3.next = NULL;

		p = head;//p也指向stu1节点
		do
		{
				printf("%d,%5.1f\n",p->number,p->score);
				p = p->next;
		}while(p != NULL);


		return 0;
}

