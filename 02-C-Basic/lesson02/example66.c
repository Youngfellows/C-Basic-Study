#include<stdlib.h>
#include<stdio.h>
#define SIZE 7

void inv(int arr[],int size);

int main()
{
		int array[SIZE] = {3,4,2,7,9,1,5};
		int i;
		int *p;
		printf("交互前:\n");
		for(i=0;i<SIZE;i++)
		{
				printf("%d ",array[i]);
		}
		printf("\n");
		
		p = array;//int 型指针变量p,p指向数组array
		inv(p,sizeof(array)/sizeof(int));

		printf("交互后:\n");
		for(i=0;i<SIZE;i++)
		{
				printf("%d ",array[i]);
		}
		printf("\n");
}

/**
 * @brief 交换元素的值
 * 
 * @param x int 型指针变量x,指向数组元素
 * @param size 数组大小
 */
void inv(int *x,int size)
{
		int *i,*j,*p;
		int temp;
		int m;

		m = (size - 1)/2;

		i = x;
		j = x + size - 1;
		p = x + m;

		for(;i <= p;i++,j--)
		{
			temp = *i;
			*i = *j;
			*j = temp;
		}
}

