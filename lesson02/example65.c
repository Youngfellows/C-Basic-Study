#include<stdlib.h>
#include<stdio.h>
#define SIZE 7

void inv(int arr[],int size);

int main()
{
		int array[SIZE] = {3,4,2,7,9,1,5};
		int i;
		printf("交互前:\n");
		for(i=0;i<SIZE;i++)
		{
				printf("%d ",array[i]);
		}
		printf("\n");

		inv(array,sizeof(array)/sizeof(int));

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

		m = (size - 1)/2;//数组元素的中间位置

		i = x;//int 型指针变量i,指向数组的首元素
		j = x + size - 1;//int 型指针变量j,指向数组的最后一个元素
		p = x + m;//int 型指针变量p,指向数组的中间位置元素

		for(;i <= p;i++,j--)
		{
			//交换元素的值
			temp = *i;
			*i = *j;
			*j = temp;
		}
}

