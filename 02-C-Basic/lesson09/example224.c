#include<stdio.h>
#include<stdlib.h>

#define LEN sizeof(struct Student)

struct Student
{
		long num;//学号
		float score;//分数
		struct Student *next;//下一个节点
};

struct Student * create();//创建链表
struct Student * del(struct Student *head,long num);//删除节点
struct Student * insert(struct Student *head,struct Student *stud);//插入节点
void print(struct Student *head);

int n;//节点个数

int main()
{
		struct Student *head;//头结点
		struct Student *stu;//插入节点
		long del_num;//删除节点学号

		printf("请输入节点数据:\n");
		head = create();
		print(head);

		printf("请输入要删除的学号:\n");
		scanf("%ld",&del_num);
		while(del_num != 0)
		{
				head = del(head,del_num);
				print(head);
				printf("请输入要删除的学号:\n");
				scanf("%ld",&del_num);
		}

		printf("请输入要插入的节点数据(学号,分数):\n");
		stu = (struct Student *)malloc(LEN);
		scanf("%ld,%f",&stu->num,&stu->score);
		printf("%ld,%.2f\n",stu->num,stu->score);
		while(stu->num != 0)
		{
				head = insert(head,stu);
				printf("请输入要插入的节点数据(学号,分数):\n");
				stu = (struct Student *)malloc(LEN);
				scanf("%ld,%f",&stu->num,&stu->score);
		}
		
		print(head);

		return 0;
}


//创建链表
struct Student * create()
{
		struct Student *head;
		struct Student *p1,*p2;
		n = 0;
		p1 = p2 = (struct Student *) malloc(LEN);
		printf("输入格式(学号,分数):\n");
		scanf("%ld,%f",&p1->num,&p1->score);
		head = NULL;
		//num==0结束输入
		while(p1->num != 0)
		{
				n = n + 1;
				if(n == 1)
				{
						head = p1;
				}else
				{
						p2->next = p1;
				}
				p2 = p1;
				p1 = (struct Student *) malloc(LEN);
				scanf("%ld,%f",&p1->num,&p1->score);
		}
		p2->next = NULL;
		return head;
}

//删除节点
struct Student * del(struct Student *head,long num)
{
		struct Student *p1,*p2;
		if(head == NULL)
		{
				printf("list null!\n");
				return head;
		}
		p1 = head;
		while(num != p1->num && p1->next != NULL)
		{
				p2 = p1;
				p1 = p1->next;
		}
		if(num == p1->num)
		{
				if(p1 == head)	
				{
						head = p1->next;
				}else
				{
						p2->next = p1->next;
				}
				printf("delet:%ld\n",num);
				n = n - 1;
		}else
		{
				printf("%ld not been found!",num);
		}
		return head;
}

//插入节点
struct Student * insert(struct Student *head,struct Student *stud)
{
		struct Student *p0,*p1,*p2;
		p1 = head;
		p0 = stud;
		if(head == NULL)
		{
				head = p0;
				p0->next = NULL;
		}else
		{
				while((p0->num > p1->num) && (p1->next != NULL))
				{
						p2 = p1;
						p1 = p1->next;
				}
		}

		//插入节点
		if(p0-> num <= p1->num)
		{
				if(head == p1)
				{
						head = p0;
				}else
				{
						p2->next = p0;
						p0->next = p1;
				}
		}else
		{
				p1->next = p0;
				p0->next = NULL;
		}
		n = n + 1;
		return head;
}

void print(struct Student *head)
{
		struct Student *p;
		printf("一共有%d个节点:\n",n);
		p = head;
		if(head != NULL)
		{
				do
				{
						printf("%ld %5.1f\n",p->num,p->score);
						p = p->next;
				}while(p != NULL);
		}
}
