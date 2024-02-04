#include<stdlib.h>
#include<stdio.h>
#define M 3
#define N 4
int main()
{
	int x[M][N];
	int y[N][M];
	int i,j;
	printf("请输入一个%d*%d的整型数组:\n",M,N);
	for(i=0;i<M;i++)
	{
	 	for(j=0;j<N;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("打印X数组:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}

	//数组转置
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			y[i][j]=x[j][i];
		}
	}
	
	printf("打印y数组:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%d ",y[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}




























