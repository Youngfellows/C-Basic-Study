#include<stdio.h>

#define LEN 10

void input(int *p,int m);
void print(int *p,int m);
void sort(int *p,int m);

int main()
{
		//将输入的10个数按逆序排列
		int array[LEN];
		int *p;
		p = array;
		printf("请输入数组:\n");
		input(p,LEN);
		printf("原始数组:\n");
		print(p,LEN);
		
		printf("排序后:\n");
		sort(p,LEN);
		print(p,LEN);

		return 0;
}

void input(int *p,int m)
{
	int *pt;
	int i = 0;
	for(pt = p; pt < p + m; pt++,i++)
	{
		printf("array[%d]=",i);
		scanf("%d",pt);
	}
}

void print(int *p,int m)
{
	int *pt;
	for(pt = p; pt < p + m; pt++)
	{
		printf("%d\t",*pt);
	}
	printf("\n");
}

void sort(int *p,int m)
{
	int i;
	int *p1,*p2;
	int temp;
	for(i = 0; i < m / 2; i++)
	{
		p1 = p + i;
		p2 = p + (m - i - 1);
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
	}
}
