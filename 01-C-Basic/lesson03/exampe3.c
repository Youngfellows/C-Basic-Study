#include<stdio.h>
#include<stdlib.h>
int main()
{
	//二维数组的初始化
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int arr2[][3]={{22,33,44},{11,77,88}};	
	int arr3[][3]={22,33,44,55,77,77,99};
	int i,j;
	

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
		}
		printf("\n");
	}

	printf("\n=======================\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n============================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}	

	return 0;
}










