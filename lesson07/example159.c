#include<stdio.h>

#define SIZE 10

void input(int array[],int size);
void print(int array[],int size);
void sort(int array[],int size);

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

void input(int array[],int size)
{
		int i;
		printf("请输入数组元素:\n");
		for(i = 0;i < size;i++)
		{
				printf("array[%d]=",i);
				scanf("%d",&array[i]);
				//printf("\n");
		}
}

void print(int array[],int size)
{
		int i;
		for(i = 0;i < size;i++)
		{
			printf("%d\t",array[i]);
		}
		printf("\n");
}

void sort(int array[],int size)
{	
		int i,j,temp;
		int min;
		for(i = 0; i < size; i++)
		{
			min = i;
			for(j = i+1; j < size; j++)
			{
				if(array[j] < array[min])
				{
					min = j;//记录最小值位置
				}
			}

			//交换最小值
			if(min != i)
			{
				temp = array[i];
				array[i] = array[min];
				array[min] = temp;
			}
		}
}

