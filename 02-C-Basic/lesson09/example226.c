#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
#define LEN sizeof(struct Student)


struct Student
{
		char num[10];//学号
		char name[15];//姓名
		char sex[2];//性别
		int age;//年龄
		float score;//成绩
		struct Student *next;//下一个节点
};

int main()
{	
		struct Student *p;//当前节点
		struct Student *pt;//下一个节点
		struct Student *head;//头结点
		struct Student stu[SIZE];//链表
		int i;
		int length;//数组长度
		int iage;//待删除年龄
		int flag = 1;
		int find = 0;
		while(flag == 1)
		{
				printf("请输入链表长度(<%d):",SIZE);
				scanf("%d",&length);
				if(length < SIZE)
				{
						flag = 0;
				}
		}

		//建立链表
		for(i = 0; i < length; i++)
		{
				p = (struct Student *)malloc(LEN);
				if(i == 0)
				{
						head = pt = p;
				}else
				{
						pt->next = p;
				}

				pt = p;
				printf("请输入第%d个学生信息:\n",i);
				printf("学号:");
				scanf("%s",p->num);
				printf("姓名:");
				scanf("%s",p->name);
				printf("性别:");
				scanf("%s",p->sex);
				printf("年龄:");
				scanf("%d",&p->age);
		}
		p->next = NULL;

		//显示链表
		p = head;
		printf("\n学号\t姓名\t性别\t年龄\n");
		while(p != NULL)
		{
				printf("%s\t%s\t%s\t%6d\n",p->num,p->name,p->sex,p->age);
				p = p->next;
		}

		//删除节点
		printf("请输入要删除的年龄:\n");
		scanf("%d",&iage);
		pt = head;
		p = pt;
		if(pt->age == iage)
		{
			//删除头节点
			p = pt->next;
			head = pt = p;
			find = 1;
		}else
		{
			pt = pt->next;
		}

		while(pt != NULL)
		{
			if(pt->age == iage)
			{
				p->next = pt->next;
				find = 1;
			}else
			{
				p = pt;
			}
			pt = pt->next;
		}

		if(!find)
		{	
			printf("没有找到年龄%d\n",iage);
		}


		printf("删除后:\n");
		p = head;
		printf("\n学号\t姓名\t性别\t年龄\n");
		while(p != NULL)
		{
				printf("%s\t%s\t%s\t%6d\n",p->num,p->name,p->sex,p->age);
				p = p->next;
		}

		return 0;
}
