#include<stdio.h>

#define SIZE 3

void input(int *p,int size);
void print(int *p,int size);
void change(int *p,int size);

int main()
{
		int array[SIZE];
		input(array,SIZE);
		printf("交换前:\n");
		print(array,SIZE);

		change(array,SIZE);
		printf("交换后:\n");
		print(array,SIZE);
		return 0;
}

void input(int *p,int size)
{
		int *pt;
		int i = 0;
		printf("请输入一个数组:\n");
		for(pt = p;pt < p + size; pt++)
		{
				printf("array[%d]=",i);
				scanf("%d",pt);
				i++;
		}
}

void print(int *p,int size)
{
	int *pt;
	for(pt = p; pt < p + size; pt++)
	{
		printf("%d\t",*pt);
	}
	printf("\n");
}


void change(int *p,int size)
{
		int i,temp;
		int *pt;
		pt = p;

		for(i = 0;i < size / 2; i++)
		{
			temp = *(pt + i);
			//printf("temp=%d\t",temp);
			*(pt + i) = *(pt + (size -1 - i));
			*(pt + (size - 1 - i)) = temp;
		}
}
