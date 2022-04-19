#include<stdio.h>

#define N 3
#define M 4

void input(int array[N][M],int row,int column);
void print(int array[N][M],int row,int column);
void print2(int array[M][N],int row,int column);
void convert(int array[N][M],int row,int column,int new_array[M][N]);

int main()
{
		int array[N][M];
		int new_array[M][N];
		printf("请输入一个%d * %d的二维数组:\n",N,M);
		input(array,N,M);
		printf("原始数字是:\n");
		print(array,N,M);
		convert(array,N,M,new_array);
		printf("转化后的是:\n");
		print2(new_array,M,N);
		return 0;
}
void input(int array[N][M],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				printf("array[%d][%d]=",i,j);
				scanf("%d",&array[i][j]);
			}
		}
}

void print(int array[N][M],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				printf("%d\t",array[i][j]);
			}
			putchar('\n');
		}
}

void print2(int array[M][N],int row,int column)
{
		int i,j;
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				printf("%d\t",array[i][j]);
			}
			putchar('\n');
		}
}

/**
 * @brief 数组转置
 * 
 * @param array N*M数组
 * @param row 行数
 * @param column 列数
 * @param new_array 返回M*N数组
 */
void convert(int array[N][M],int row,int column,int new_array[M][N])
{
	int i,j;
	int temp;
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
		{
			new_array[j][i] = array[i][j];
		}
	}
}
