#include<stdio.h>

#define N 7

struct Person
{
		int number;//当前的编号
		int next_person;//下一个的序号
};

void input(struct Person link[N]);
void print(struct Person link[N]);
void exit_quanquan(struct Person link[N]);

int main()
{
		//13个人围成一圈,从第一个开始顺序报数1,2,3.凡报到3者退出圈子,问最后生下来的是几号
		struct Person link[N + 1];//一个圈
		input(link);
		printf("原来圈是:\n");
		print(link);

		exit_quanquan(link);
		
		printf("退出圈圈,最后是:\n");
		print(link);

		return 0;
}

void input(struct Person link[N])
{
		int i;
		//赋值
		for(i = 1; i <= N; i++)
		{
				if(i == N)
				{
						link[i].next_person = 1;//做成循环链表
						link[i].number = i;
				}else
				{
						link[i].next_person = i + 1;
						link[i].number = i;
				}
		}
}

void exit_quanquan(struct Person link[N])
{
		int i;
		int count;//退出个数
		int h;//下一个序号

		count = 0;
		h = N;

		printf("依次出圈顺序是:\n");
		while(count < N - 1)
		{
			i = 0;
			while(i != 3)
			{
				h = link[h].next_person;
				if(link[h].number != 0)
				{
					i++;
				}
			}

			printf("%4d",link[h].number);
			link[h].number = 0;
			count++;
		}
		printf("\n");
}


void print(struct Person link[N])
{
		int i;
		for(i = 1; i <= N; i++)
		{
				if(link[i].number != 0)
				{
						printf("%d\t",link[i].number);
				}
		}
		printf("\n");
}

