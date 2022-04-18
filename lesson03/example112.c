#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student) //获取结构体内存大小

struct Student
{
		long number;
		float score;
		struct Student *next;
};

int node_number;//节点数

struct Student *create();//创建链表
void print(struct Student *head);

int main()
{
		struct Student *head;//结构体指针变量head,头节点
		head = create();
		
		print(head);
		return 0;
}

/**
 * @brief 创建链表
 * 
 * @return struct Student* 返回创建好的链表的头结点
 */
struct Student *create()
{
		struct Student *head;//头结点
		struct Student *p1;//指向新开辟的节点
		struct Student *p2;//指向最后一个节点

		node_number = 0;
		printf("len:%ld\n",LEN);
		p1 = p2 = (struct Student *)malloc(LEN);//创建一个节点
		printf("请输入第一个节点学号和分数:\n");
		scanf("%ld,%f",&p1->number,&p1->score);
		head = NULL;//开始头结点为空

		while(p1->number != 0)//结束条件
		{
				node_number++;
				if(node_number ==1)
				{
						head = p1;//为头结点赋值
				}else
				{
						p2->next = p1;//指向下一个节点
				}

				p2 = p1;//p2也指向新开辟的节点

				//再开辟一个新节点
				p1 = (struct Student *)malloc(LEN);
				scanf("%ld,%f",&p1->number,&p1->score);
		}

		p2->next = NULL;//最后一个节点不指向任何内存空间

		return head;//返回链表头指针
}

/**
 * @brief 打印结构体链表
 * 
 * @param head 结构体链表head头结点
 */
void print(struct Student *head)
{
	struct Student *p;
	p = head;//指针变量p指向链表头
	printf("链表信息:\n");
	printf("学号\t分数\n");
	if(p != NULL)
	{
		do
		{
			printf("%ld\t%.2f\n",p->number,p->score);
			printf("%ld\t%.2f\n",(*p).number,(*p).score);
			p = p->next;//指向下一个节点
		}while(p != NULL);
	}
}

