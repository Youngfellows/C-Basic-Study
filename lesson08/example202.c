#include<stdio.h>

#define N 50

void input(int *p,int n);
void print(int *p,int n);

int main()
{
		//n个人围成一圈,顺序排号，从第一个人开始报数(1-3)，凡报到3的人就退出圈子,问剩下的是原来几号的那位
		int i;//循环次数
		int k;//按1，2，3报数时的计算变量
		int m;//退出人数
		int n;//n个人围成的圈圈
		int number[N];//数组圈圈
		int *p;
		p = number;//指针变量指向数组
		printf("请输入n个人(n<%d):\n",N);
		scanf("%d",&n);
		while(n > N)
		{
				printf("%d大于%d了,请从新输入:\n",n,N);
				scanf("%d",&n);
		}

		input(p,n);
		printf("排序是:\n");
		print(p,n);

		//未退出人数大于1
		i = 0;
		k = 0;
		m = 0;
		while(m < n -1)
		{
				//不是已经退出的累加
				if(*(p + i) != 0)
				{
						k++;
				}
				if(k == 3)
				{
					*(p + i) = 0;//退出的编号置0
					k = 0;
					m++;//退出累加
				}

				i++;
				//最后一个了，循环
				if(i == n)
				{
					i = 0;
				}
		}
		while(*p == 0)
		{
			p++;
		}
		printf("最后一个是原来的%d号\n",*p);

		return 0;
}

void input(int *p,int n)
{
		int i;
		for(i = 0; i < n; i++)
		{
				*(p + i) = i + 1;
		}
}

void print(int *p,int n)
{
		int *pt;
		int i = 0;
		for(pt = p; pt < p + n; pt++,i++)
		{
				if(i % 5 == 0)
				{
						printf("\n");
				}
				printf("%d\t",*pt);
		}
		printf("\n");
}
