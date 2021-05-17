#include<stdio.h>
#define SIZE 4

void input(int array[],int size);
void print(int array[],int size);
void sort(int array[],int size);


int main()
{
		int array[SIZE];
		input(array,SIZE);
		printf("输入数组是:\n");
		print(array,SIZE);
		sort(array,SIZE);
		print(array,SIZE);
		return 0;
}

void input(int array[],int size)
{
		int i;
		for(i=0;i<size;i++)
		{
				printf("%d,请输入整数:",i);
				scanf("%d",&array[i]);
		}
}

void print(int array[],int size)
{

		int i;
		for(i=0;i<size;i++)
		{
				printf("%d\t",array[i]);
		}
		printf("\n");
}

void sort(int array[],int size)
{		
		int i,j;
		int min;
		int temp;
		for(i = 0;i < size;i++)
		{
				min = i;
				for(j = i + 1;j < size;j++)
				{
					if(array[j] < array[min])
					{
						min = j;
					}
				}

				//交换
				if(min != i)
				{
					temp = array[i];
					array[i] = array[min];
					array[min] = temp;
				}
		}
}
