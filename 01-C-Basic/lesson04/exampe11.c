#include<stdio.h>
#include<stdlib.h>
#define ROW 3//3行
#define COLUMN 4//4列

int main()
{
	//找出一个二维数组中的最大值及其位置
	int array[ROW][COLUMN] = {{12,3,5,23},{21,15,45,18},{4,21,34,6}};
	int i,j,max,row,column;
	printf("打印二维数组: \n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	
	//第一种方法找出一个二维数组中的最大值及其位置
	max = array[0][0];
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			if(array[i][j]>max)
			{
				max = array[i][j];
				row = i;
				column = j;
			}
		}
	}


	printf("二维数组中的最大值是: max = %d,i=%d,j=%d\n",max,row,column);

	return 0;
}
