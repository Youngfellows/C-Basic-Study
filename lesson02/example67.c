#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void sort(int arr[],int size);

int main()
{
		int array[SIZE] = {22,11,78,34,9};
		int *p;
		int i;
		printf("排序前:\n");
		p = array;//int 型指针变量p,p指向数组元素首地址
		for(i=0;i<SIZE;i++,p++)
		{
			printf("%d ",*p);
		}
		
		printf("\n");
		sort(array,sizeof(array)/sizeof(int));

		printf("排序后:\n");
		p = array;//int 型指针变量p,从新指向数组元素首地址
		for(i=0;i<SIZE;i++,p++)
		{
			printf("%d ",*p);
		}
		printf("\n");

		return 0;
}

/**
 * @brief 选择排序
 * 
 * @param arr 数组元素
 * @param size 数组元素大小
 */
void sort(int arr[],int size)
{
		printf("size:%d\n",size);
		int i,j,temp,max;

		for(i=0;i<size-1;i++)
		{
				max = i;//最大值位置是第1个
				for(j=i+1;j<size;j++)
				{
					if(arr[max] < arr[j])
					{
						max = j;//记录最大值位置
					}
				}
				if (max != i)
				{
					temp = arr[max];
					arr[max] = arr[i];
					arr[i] = temp;
				}
				
		}

}
