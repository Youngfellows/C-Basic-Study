#include<stdlib.h>
#include<stdio.h>
int main()
{
		int array1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
		int array2[][3]={{11,22,33},{44,55,66}};
		int array3[][3]={77,66,55,44,33,22,11,99,88,45};
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",array1[i][j]);
			}
			printf("\n");
		}
		printf("******************\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",array2[i][j]);
			}
			printf("\n");
		}
		
		printf("******************\n");
		for(i=0;i<4;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",array3[i][j]);
			}
			printf("\n");
		}
		return 0;
}
