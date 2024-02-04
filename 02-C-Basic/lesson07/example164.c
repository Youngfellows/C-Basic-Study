#include<stdio.h>

#define N 10
int main()
{
	int i,j,array[N][N];
	printf("输出杨辉三角:\n");
	for(i = 0;i < N;i++)
	{
			array[i][i] = 1;
			array[i][0] = 1;
	}


	//赋值
	for(i = 2; i < N; i++)
	{
		for(j = 1; j <= i - 1; j++)
		{
			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
	}

	//打印
	for(i = 0;i < N;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%6d",array[i][j]);
		}
		printf("\n");
	}

}
