#include<stdio.h>

#define SIZE 10

void input(int *p,int size);
void print(int *p,int size);
void sort(int *p,int size);

int main()
{
		//选择排序法对整数进行排序
		int array[SIZE];
		input(array,SIZE);
		printf("原始数组是:\n");
		print(array,SIZE);
		sort(array,SIZE);
		printf("选择排序后数组是:\n");
		print(array,SIZE);

		return 0;
}

void input(int *p,int size)
{
		int *pt;
		int i;
		printf("请输入数组元素:\n");
	
		for(pt = p,i = 0;pt < p + size;pt++,i++)
		{
				printf("array[%d]=",i);
				scanf("%d",pt);
		}
}

void print(int *p,int size)
{
		int i;
		for(i = 0;i < size;i++)
		{
			printf("%d\t",*(p+i));
		}
		printf("\n");
}

void sort(int *p,int size)
{	
		int *pt = p;
		int i,j,temp;
		int min;
		for(i = 0; i < size; i++)
		{
			min = i;
			for(j = i+1; j < size; j++)
			{
				if(*(pt + j) < *(pt + min))
				{
					min = j;//记录最小值位置
				}
			}

			//交换最小值
			if(min != i)
			{
				temp = *(pt + i);
				*(pt + i) = *(pt + min);
				*(pt + min) = temp;
			}
		}
}

