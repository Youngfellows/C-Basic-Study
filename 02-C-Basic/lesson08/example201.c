#include<stdio.h>

#define N 5

void input(int *number,int size);
void print(int *number,int size);
void move_array(int *number,int size,int move);

int main()
{
		int number[N];
		int *p;
		int move;
		p = number;
		printf("请输入长度为%d的数组:\n",N);
		input(p,N);
		printf("元素数组是:\n");
		print(p,N);
		printf("请输入需要移动的位数:\n");
		scanf("%d",&move);
		move_array(p,N,move);
		printf("移动%d位后:\n",move);
		print(p,N);

		return 0;
}
void input(int *number,int size)
{
		int *pt;
		int i = 0;
		for(pt = number; pt < number + size; pt++,i++)
		{
				printf("number[%d]=",i);
				scanf("%d",pt);
		}
}

void print(int *number,int size)
{
		int *pt;
		for(pt = number; pt < number + size; pt++)
		{
				printf("%d\t",*pt);
		}
		printf("\n");
}

void move_array(int *number,int size,int move)
{
		int *p;
		int number_end;//最后一个元素
		number_end = *(number + size - 1);
		for(p = number + size - 1; p > number; p--)
		{
				*p = *(p -1);
		}
		*number = number_end;
		move--;
		if(move > 0)
		{
				move_array(number,size,move);
		}
}
