#include<stdio.h>

#define N 10

void input(int *p,int len);
void print(int *p,int len);
void change_max_min_value(int *p,int len);

int main()
{
		int array[N];
		int *p = array;
		printf("请输入%d个元素:\n",N);
		input(p,N);
		printf("原始数组是:\n");
		print(p,N);
		
		change_max_min_value(p,N);
		printf("交换后:\n");
		print(p,N);
		return 0;
}

void input(int *p,int len)
{
		int i = 0;
		int *pt;
		for(pt = p; pt < p + len; pt++,i++)
		{
			printf("array[%d]=",i);
			scanf("%d",pt);
		}
}

void print(int *p,int len)
{
		int *pt;
		for(pt = p; pt < p + len; pt++)
		{
			printf("%d\t",*pt);
		}
		printf("\n");
}

void change_max_min_value(int *number,int len)
{
		int *max;//指向最大元素
		int *min;//指向最小元素
		int *p;
		int temp;
		max = min = number;
		for(p = number + 1; p < number + len;p++)
		{
			if(*p > *max)
			{
					max = p;
			}
		}

		//交互最大值
		temp = number[0];
		number[0] = *max;
		*max = temp;

		//找出最小的值
		p = number;
		for(p = number + 1; p < number + len; p++)
		{
			if(*p < *min)
			{
				min = p;
			}
		}

		temp = number[len - 1];
		number[len - 1] = *min;
		*min = temp;
}
