#include<stdio.h>
#define SIZE 4

void input(int *p,int size);
void print(int *p,int size);
void sort(int *p,int size);


int main()
{
		int array[SIZE];
		int *p;
		p = array;
		input(p,SIZE);
		printf("输入数组是:\n");
		print(p,SIZE);
		sort(p,SIZE);
		printf("排序后数组是:\n");
		print(p,SIZE);
		return 0;
}

void input(int *p,int size)
{
		int *pt = p;
		int i;
		for(i=0;i<size;i++,pt++)
		{
				printf("%d,请输入整数:",i);
				scanf("%d",pt);
		}
}

void print(int *p,int size)
{
		int *pt = p;
		int i;
		for(i=0;i<size;i++,pt++)
		{
				printf("%d\t",*pt);
		}
		printf("\n");
}

void sort(int *p,int size)
{		
		int *pt = p;
		int i,j;
		int min;
		int temp;
		for(i = 0;i < size;i++)
		{
				min = i;
				for(j = i + 1;j < size;j++)
				{
					if(*(pt+j)< *(pt+min))
					{
						min = j;
					}
				}

				//交换
				if(min != i)
				{
					temp = *(pt+i);
					*(pt+i) = *(pt+min);
					*(pt+min) = temp;
				}
		}
}
