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
		p = array;
		for(i=0;i<SIZE;i++,p++)
		{
			printf("%d ",*p);
		}
		
		printf("\n");
		sort(array,sizeof(array)/sizeof(int));

		printf("排序后:\n");
		p = array;
		for(i=0;i<SIZE;i++,p++)
		{
			printf("%d ",*p);
		}
		printf("\n");

		return 0;
}


void sort(int arr[],int size)
{
		printf("size:%d\n",size);
		int i,j,temp,max;

		for(i=0;i<size-1;i++)
		{
				max = i;
				for(j=i+1;j<size;j++)
				{
					if(arr[max] < arr[j])
					{
						temp = arr[max];
						arr[max] = arr[j];
						arr[j] = temp;
					}
				}
		}

}
