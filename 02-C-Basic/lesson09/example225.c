#include<stdio.h>
#include<string.h>

#define LEN1 4
#define LEN2 5
#define LEN 10

struct Student
{
		long num;//学号
		char name[LEN];//姓名
		struct Student *next;//下一个节点
};

int main()
{
		//删除a链表中和b链表相同学号的节点
		struct Student link1[LEN1] = {{1001,"wang"},{1002,"li"},{1005,"chen"},{1006,"zhou"}};
		struct Student link2[LEN2] = {{1003,"zhang"},{1004,"tian"},{1005,"tan"},{1007,"he"},{1008,"duan"}};
		int i;
		struct Student *p;//当前节点
		struct Student *p1;//链表1下一个节点
		struct Student *p2;//链表2下一个节点
		struct Student *head1;//头节点1
		struct Student *head2;//头节点2

		head1 = link1;//头结点1指向链表1
		head2 = link2;//头节点2指向链表2

		//为链表1赋值
		printf("链表1是:\n");
		for(p1 = head1, i = 1; i <= LEN1; i++)
		{
				if(i < LEN1)
				{
						p1->next = link1 + i;//下一个节点
				}else
				{
						p1->next = NULL;//尾节点
				}
				printf("%4ld%8s\n",p1->num,p1->name);
				if(i < LEN1)
				{
						p1 = p1->next;
				}
		}

		printf("链表2是:\n");
		for(p2 = head2,i = 1; i <= LEN2; i++)
		{
				if(i < LEN2)
				{
						p2->next = link2 + i;
				}else
				{
						p2->next = NULL;
				}
				printf("%4ld%8s\n",p2->num,p2->name);
				if(i < LEN2)
				{
						p2 = p2->next;
				}
		}

		//删除链表a中相同的节点
		p1 = head1;
		while(p1 != NULL)
		{
				p2 = head2;
				while((p1->num != p2->num) && (p2->next != NULL))
				{
						p2 = p2->next;//遍历链表2
				}
				//节点相同,删除
				if(p1->num == p2->num)
				{
						if(p1 == head1)
						{
								head1 = p1->next;
						}else
						{
								p->next = p1->next;
								p1 = p1->next;
						}
				}else
				{
						p = p1;
						p1 = p1->next;
				}
		}

		printf("最后的链表a是:\n");
		p1 = head1;
		while(p1 != NULL)
		{
				printf("%4ld %8s\n",p1->num,p1->name);
				p1 = p1->next;
		}

		return 0;
}
