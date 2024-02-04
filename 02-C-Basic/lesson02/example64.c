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
 * @brief 倒置元素顺序
 * 
 * @param arr 数组元素
 * @param size 数组大小
 */
void inv(int arr[],int size)
{
		int i,j,temp;
		int m;
		m = (size -1)/2;
		for(i=0;i<m;i++)
		{
			j = size - 1 - i;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
}

