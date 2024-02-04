#include<stdio.h>
#include<stdlib.h>
int main()
{
	//交换数组元素	
	int arr[3];
	arr[0]=33;
	arr[1]=27;
	arr[2]=48;
	int i;
	int temp;
	printf("原始数组:\n");
	for(i=0;i<3;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	printf("交换顺序后的数组是:\n");
	temp = arr[1];
	arr[1] = arr[2];
	arr[2] = temp;

	for(i=0;i<3;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}



