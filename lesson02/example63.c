#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void change(int a[],int size)
{
		printf("arr size=%d\n",sizeof(a));
		int i,j;
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(a[i] > a[j])
				{
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
				}
			}
		}
}

int main()
{
		int array[SIZE] = {17,8,33,27,24};
		int i;
		printf("前:\n");
		for(i=0;i<SIZE;i++)
		{
			printf("%d ",*(array + i));
		}
		printf("\n");
		change(array,sizeof(array)/sizeof(int));
		
		printf("后:\n");
		for(i=0;i<SIZE;i++)
		{
			printf("%d ",*(array + i));
		}
		printf("\n");
		return 0;
}
