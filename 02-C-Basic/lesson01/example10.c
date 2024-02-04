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
		printf("打印数组x:\n");
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				printf("%d ",x[i][j]);
			}
			printf("\n");
		}
		return 0;
}
